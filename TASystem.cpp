#include "TASystem.h"
#include <algorithm>


TASystem::TASystem()
{
}


TASystem::~TASystem()
{
}

bool TASystem::addComponent(TAComponent * component)
{
	if (components.find(component) != components.end()) //component already inserted
		return false;
	components.insert(component);
	return true;
}

bool TASystem::addInteraction(TAInteraction * interaction)
{
	if (std::find(interactions.begin(), interactions.end(), interaction) != interactions.end()) //interaction already inserted
		return false;

	interactions.push_back(interaction);
	return true;
}

std::set<TAComponent*> TASystem::getComponents()
{
	return components;
}

std::vector<TAInteraction*> TASystem::getInteractions()
{
	return interactions;
}

bool TASystem::conflictExists(std::vector<TAInteraction *> taInteractions)
{
	for (unsigned int i = 0; i < taInteractions.size() - 1; i++)
	{
		for (unsigned int j = i + 1; j < taInteractions.size(); j++)
		{
			std::set<TAPort *> ports_from_A = taInteractions[i]->getPorts();
			std::set<TAPort *> ports_from_B = taInteractions[j]->getPorts();
			std::set<TAComponent *> components_from_A = taInteractions[i]->getComponents();
			std::set<TAComponent *> components_from_B = taInteractions[j]->getComponents();
			//if (!is_disjoint(components_from_A, components_from_B))
			//	return true;

			if (containsSharedPort(components_from_A, ports_from_B) || containsSharedPort(components_from_B, ports_from_A))
				return true;
		}
	}
	return false;
}

bool TASystem::deadlockExists()
{
	for (TAInteraction * interaction : interactions) {
		if (interaction->isReadyToExecute()) // if an interaction is ready, then they're is no deadlock
			return false;
	}
	return true;
}

void TASystem::list()
{
	std::cout << "System{Interaction: ";
	for (TAInteraction * interaction : interactions)
	{
		interaction->list();
		std::cout << ", ";
	}

	std::cout << ". Component: ";
	unsigned int componentSize = components.size();
	unsigned int i = 1;
	for (TAComponent * component : components)
	{
		component->list();
		if(i < componentSize)
			std::cout << ", ";
		i++;
	}
	std::cout << "}";
}

void TASystem::printState()
{
	if (conflictExists(interactions))
		std::cout << "The system is at a conflict state.";

	if (deadlockExists())
		std::cout << "The system is at a deadlock state.";
	else
	{
		std::cout << "The system is at a ready state.";
		for (TAInteraction * interaction : interactions)
		{
			for (TAComponent * component : interaction->getComponents())
			{
				component->printState();
			}
			interaction->getGuard()->printState();
			interaction->getAction()->printState();
		}
	}
}

void TASystem::execute(int steps)
{
	int count = 0;
	std::vector<TAInteraction *> nonConflictingInteractions = getNonConflicting(interactions);
	for (std::vector<TAInteraction*>::iterator it = nonConflictingInteractions.begin(); it != nonConflictingInteractions.end(); ++it)
	{
		if (count < steps)
			(*it)->evaluate();
		else
			break;
		count++;
	}
}

std::vector<TAInteraction *> TASystem::getNonConflicting(std::vector<TAInteraction *> interactions)
{
	std::vector<TAInteraction *> nonConflictingInteractions;
	for (TAInteraction * interaction : interactions)
	{
		nonConflictingInteractions.push_back(interaction);
		if (nonConflictingInteractions.size() > 1)
		{
			if (conflictExists(nonConflictingInteractions))
			{
				nonConflictingInteractions.erase(std::remove(nonConflictingInteractions.begin(), nonConflictingInteractions.end(), interaction), nonConflictingInteractions.end());
			}
		}
	}
	return nonConflictingInteractions;
}

bool TASystem::containsSharedPort(std::set<TAComponent*> components, std::set<TAPort*> ports)
{
	for (TAPort * port : ports)
	{
		for (TAComponent * component : components)
		{
			if (component->hasPort(port))
				return true;
		}
	}
	return false;
}

template<class Set1, class Set2>
bool TASystem::is_disjoint(const Set1 &set1, const Set2 &set2)
{
	if (set1.empty() || set2.empty()) return true;

	typename Set1::const_iterator
		it1 = set1.begin(),
		it1End = set1.end();
	typename Set2::const_iterator
		it2 = set2.begin(),
		it2End = set2.end();

	if (*it1 > *set2.rbegin() || *it2 > *set1.rbegin()) return true;

	while (it1 != it1End && it2 != it2End)
	{
		if (*it1 == *it2) return false;
		if (*it1 < *it2) { it1++; }
		else { it2++; }
	}

	return true;
}