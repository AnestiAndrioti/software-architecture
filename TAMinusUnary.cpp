#include "TAMinusUnary.h"



TAMinusUnary::TAMinusUnary(TA* input_first_operator)
{
	if (input_first_operator->getType() == typeid(bool).name())
	{
		throw std::invalid_argument("Argument is a boolean.");
	}
}

TAMinusUnary::TAMinusUnary(TA* input_first_operator, std::string input_name) : TAMinusUnary(input_first_operator)
{
	name = input_name;
}

TAMinusUnary::~TAMinusUnary()
{
	delete first_operator;
	delete &name;
	delete this;
}

std::string TAMinusUnary::getType()
{
	return typeid(first_operator).name();
}
