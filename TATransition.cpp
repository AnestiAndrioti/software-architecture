#include "TATransition.h"

TATransition::TATransition(TAState * from, TAState * to) : sourceState(from), destinationState(to)
{

}

TATransition::~TATransition()
{
	delete this;
}

void TATransition::setSourceState(TAState * from)
{
	sourceState = from;
}

void TATransition::setDestinationState(TAState * to)
{
	destinationState = to;
}

void TATransition::setTransitionLabel(TALabel * label)
{
	transitionLabel = label;
}

TAState * TATransition::getSourceState()
{
	return sourceState;
}

TAState * TATransition::getDestinationState()
{
	return destinationState;
}


TALabel * TATransition::getTransitionLabel()
{
	return transitionLabel;
}


void TATransition::list()
{
	std::cout << "Transition{From: ";
	sourceState->list();
	std::cout << ", to: ";
	destinationState->list();
	std::cout << ", transition label: ";
	transitionLabel->list();
	std::cout << "}";

}


TATransition TATransition::operator=(const TATransition & rhs)
{
	this->sourceState = rhs.sourceState;
	this->destinationState = rhs.destinationState;
	this->transitionLabel = rhs.transitionLabel;
	return *this;
}