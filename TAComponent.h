#pragma once
#include "TAObject.h"
#include "TAState.h"
#include "TAPort.h"
#include "TATransition.h"
#include "TALabel.h"
#include <set>

class TAComponent :
	public TAObject
{
public:
	
	TAComponent(TAState *initState, std::set<TAState*> states, std::set<TAPort*> ports);

	TAComponent(TAState *initState, std::set<TAState*> states, std::set<TAPort*> ports,
		std::set<TATransition*> transitions, std::set<TALabel*> labels);

	~TAComponent();


	void addTransitionLabel(TALabel *transitionLabel);

	void mapTransitionToLabel(TATransition *transition, TALabel *label);

	void evaluate();

	TAComponent clone();

	void list();

	void printState();

	void printVariables();

	TATransition * getPortTransition(TAPort* port);

	std::set<TAState*> getStates();
	std::set<TAPort*> getPorts();
	std::set<TATransition*> getTransitions();
	std::set<TALabel*> getLabelTransitions();


	bool addState(TAState* state);

	bool addPort(TAPort* port);
	bool hasPort(TAPort* port);

	TAComponent operator=(const TAComponent & rhs);

	bool addTransition(TATransition* transition);

private:
	TAState* currentState;

	std::set<TAState*> states;
	std::set<TAPort*> ports;
	std::set<TATransition*> transitions;
	std::set<TALabel*> transitionLabels;

};

