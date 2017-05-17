#pragma once
#include "TAObject.h"
#include "TAComponent.h"
#include "TAPort.h"

class TAInteraction :
	public TAObject
{
public:
	TAInteraction();
	~TAInteraction();

	bool addComponent(TAComponent * component);


	void setGuard(TAFormula * guard);
	TAFormula * getGuard();

	void setAction(TAStatement * action);
	TAStatement * getAction();

	std::set<TAComponent *> getComponents();
	std::set<TAPort *> getPorts();

	void list();

	bool isReadyToExecute();

	void evaluate();

private:
	std::set<TAComponent *> components;
	std::set<TAPort *> ports;

	TAFormula * guard;
	TAStatement * action;
};
