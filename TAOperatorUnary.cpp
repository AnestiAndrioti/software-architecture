#include "TAOperatorUnary.h"



TAOperatorUnary::TAOperatorUnary()
{
}


TAOperatorUnary::~TAOperatorUnary()
{
	delete &name;
	delete this;
}
