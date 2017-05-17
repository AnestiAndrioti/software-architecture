#pragma once
#include "TAObject.h"
#include "TAInteraction.h"
class TASystem :
	public TAObject
{

public:
	TASystem();
	~TASystem();

	bool addComponent(TAComponent * component);
	bool addInteraction(TAInteraction * interaction);

	std::set<TAComponent *> getComponents();
	std::vector<TAInteraction *> getInteractions();

	bool conflictExists(std::vector<TAInteraction *> taInteractions);

	bool deadlockExists();

	void list();

	void printState();

	void execute(int steps = 1);

private:
	std::set<TAComponent*> components;
	std::vector<TAInteraction*> interactions;

	// Returns the set of non conflicting interactions inside
	 std::vector<TAInteraction *> getNonConflicting(std::vector<TAInteraction *> interactions);
	 template<class Set1, class Set2>
	 bool is_disjoint(const Set1 & set1, const Set2 & set2);
	
	 bool containsSharedPort(std::set<TAComponent*> components, std::set<TAPort*> ports);
};

