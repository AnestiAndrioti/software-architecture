#include "TAComponent.h"

TAComponent::TAComponent(TAState * input_initialState, std::set<TAState*> input_states, std::set<TAPort*> input_ports) : 
	currentState(input_initialState), states(input_states), ports(input_ports)
{
}

TAComponent::TAComponent(TAState * input_initialState, std::set<TAState*> input_states, std::set<TAPort*> input_ports, std::set<TATransition*> input_transitions, std::set<TALabel*> input_labels) :
	currentState(input_initialState), states(input_states), ports(input_ports), transitions(input_transitions), transitionLabels(input_labels)
{
}

TAComponent::~TAComponent()
{
}

void TAComponent::addTransitionLabel(TALabel * transitionLabel)
{
	transitionLabels.insert(transitionLabel);
}

void TAComponent::mapTransitionToLabel(TATransition * transition, TALabel * label)
{
	transition->setTransitionLabel(label);
	transitions.insert(transition);
}

void TAComponent::evaluate()
{
	for (TAPort * port : ports) {
		TATransition * transition = getPortTransition(port);
		if (transition != nullptr) {
			currentState = transition->getDestinationState();
			return;
		}
	}
}

TAComponent TAComponent::clone()
{
	return TAComponent(currentState, states, ports, transitions, transitionLabels);
}

void TAComponent::list()
{
	std::cout << "Component{state: "; 
	for (TAState * state : states)
	{
		state->list();
		std::cout << " ";
	}
	std::cout << ", current State: ";
	currentState->list();

	std::cout << ", ports: ";
	for (TAPort * port : ports)
	{
		port->list();
		std::cout << " ";
	}
	std::cout << ", transitions: ";
	for (TATransition * transition : transitions)
	{
		transition->list();
		std::cout << " ";
	}
	std::cout << ", transition labels: ";
	for (TALabel * label : transitionLabels)
	{
		label->list();
		std::cout << " ";
	}
	std::cout << "}";
	std::cout << std::endl;
}

void TAComponent::printState()
{
	std::cout << "Current State: ";
	currentState->list();
}

void TAComponent::printVariables()
{
	std::vector<std::string> variableNames;
	for (TATransition * transition : transitions) 
	{
		std::vector<TAData*> variables = transition->getTransitionLabel()->getGuard()->getOperands();

		for (TAData* variable : variables)
			variableNames.push_back(variable->getName());
	}
	std::cout << "Variable names: {";
	for (unsigned int i = 0; i < variableNames.size() - 1; i++)
		std::cout << variableNames[i] << ", ";
	std::cout << variableNames[variableNames.size() - 1] << "}";
}

bool TAComponent::addTransition(TATransition * transition)
{
	if (transitions.find(transition) == transitions.end())
	{
		// if transistion not already in transistions vector
		transitions.insert(transition);
		return true;
	}
	return false;
}

TATransition * TAComponent::getPortTransition(TAPort* port)
{
	if (std::find(ports.begin(), ports.end(), port) == ports.end())
		return nullptr;

	for (TATransition * transition : transitions) {
		if (transition->getSourceState() == currentState) {
			TALabel * label = transition->getTransitionLabel();
			if (label != nullptr && label->getPortId() == port->getId())
			{
				TAFormula * guard = label->getGuard();
				guard->evaluate();
				if (guard->getValue()) 
				{
					return transition;
				}
			}
		}
	}
	return nullptr;
}

std::set<TAState*> TAComponent::getStates()
{
	return states;
}

std::set<TAPort*> TAComponent::getPorts()
{
	return ports;
}

std::set<TATransition*> TAComponent::getTransitions()
{
	return transitions;
}

std::set<TALabel*> TAComponent::getLabelTransitions()
{
	return transitionLabels;
}

bool TAComponent::addState(TAState* state)
{
	if (states.find(state) == states.end())
	{
		// if state not already in states vector
		states.insert(state);
		return true;
	}
	return false;
}

bool TAComponent::addPort(TAPort* port)
{
	if (ports.find(port) == ports.end())
	{
		// if port not already in ports vector
		ports.insert(port);
		return true;
	}
	return false;
}

bool TAComponent::hasPort(TAPort * port)
{
	if (ports.find(port) == ports.end())
		return false;
	return true;
}

TAComponent TAComponent::operator=(const TAComponent & rhs)
{
	this->currentState = rhs.currentState;
	this->states = rhs.states;
	this->ports = rhs.ports;
	this->transitions = rhs.transitions;
	this->transitionLabels = rhs.transitionLabels;
	return *this;
}
