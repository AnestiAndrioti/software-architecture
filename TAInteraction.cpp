#include "TAInteraction.h"



TAInteraction::TAInteraction()
{
}


TAInteraction::~TAInteraction()
{
}

bool TAInteraction::addComponent(TAComponent * component)
{
	if (components.find(component) != components.end()) //component already inserted
		return false;

	for (TAPort * port : component->getPorts())
	{
		if (ports.find(port) == ports.end()) //if port not already in ports
		{
			ports.insert(port);
			components.insert(component);
			return true;
		}
	}
	return false;
}

void TAInteraction::setGuard(TAFormula * guard)
{
	this->guard = guard;
}

TAFormula * TAInteraction::getGuard()
{
	return guard;
}

void TAInteraction::setAction(TAStatement * action)
{
	this->action = action;

}

TAStatement * TAInteraction::getAction()
{
	return action;
}

std::set<TAComponent*> TAInteraction::getComponents()
{
	return components;
}

std::set<TAPort*> TAInteraction::getPorts()
{
	return ports;
}

void TAInteraction::list()
{
	std::cout << "Interaction{Components:";
	for (TAComponent * component : components)
	{
		component->list();
		std::cout << ", ";
	}
	std::cout << ". Ports:";
	for (TAPort * port : ports)
	{
		port->list();
		std::cout << ", ";
	}
	std::cout << ". Guard:";
	guard->list();
	std::cout << ". Action";
	action->list();
	std::cout << std::endl;
}

bool TAInteraction::isReadyToExecute()
{
	guard->evaluate();
	if (!guard->getValue())
		return false;

	for (TAComponent * component : components) {
		for (TAPort * port : ports)
		{
			if (component->getPortTransition(port) == nullptr)
				return false;
		}
	}
	return  true;
}

void TAInteraction::evaluate()
{
	action->evaluate();
	for (TAComponent * component : components)
	{
		component->evaluate();
	}
}