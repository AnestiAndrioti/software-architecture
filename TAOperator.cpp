#include "TAOperator.h"



void TAOperator::evaluate()
{
}

bool TAOperator::checkFreeVariable(TAType * fv, TAOperator * op)
{
	return true;
}

void * TAOperator::getValue()
{
	return value;
}

TAOperator::TAOperator()
{
}


TAOperator::~TAOperator()
{
	delete &name;
	delete this;
}
