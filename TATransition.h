#pragma once

#include "TAObject.h"
#include "TAState.h"
#include "TALabel.h"


class TATransition :
	public TAObject
{
public:

	TATransition(TAState * from, TAState * to);
	~TATransition();


	void setSourceState(TAState * from);
	void setDestinationState(TAState * to);
	void setTransitionLabel(TALabel * label);
	TAState * getSourceState();
	TAState * getDestinationState();
	TALabel * getTransitionLabel();

	void list();

	TATransition operator=(const TATransition& rhs);

private:

	TAState * sourceState;
	TAState * destinationState;
	TALabel * transitionLabel;
};