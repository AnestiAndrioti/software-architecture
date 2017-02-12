#include "TAOperator.h"



void TAOperator::evaluate()
{
}

TAOperator::TAOperator()
{
}


TAOperator::~TAOperator()
{
	delete &name;
	delete this;
}
