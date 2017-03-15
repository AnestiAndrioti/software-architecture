#include "TAMinusUnary.h"



TAMinusUnary::TAMinusUnary(TAData* input_first_operator)
{
	if (input_first_operator->getType() == typeid(bool).name())
	{
		throw std::invalid_argument("Argument is a boolean.");
	}
	first_operator = input_first_operator;
	setName("-");
	hasUserDefinedName = false;
}

TAMinusUnary::TAMinusUnary(TAData* input_first_operator, std::string input_name) : TAMinusUnary(input_first_operator)
{
	setName(input_name);
	hasUserDefinedName = true;
}

TAMinusUnary::~TAMinusUnary()
{
	delete first_operator;
	delete &name;
	delete value;
	delete this;
}

std::string TAMinusUnary::getType()
{
	return typeid(first_operator).name();
}

void TAMinusUnary::evaluate()
{
	delete value;

	if (first_operator->getType() == typeid(int).name())
	{
		int answer = - *(int*)first_operator->getValue();
		value = new int(answer);
	}
	else
	{
		double answer = - *(double*)first_operator->getValue();
		value = new double(answer);
	}

	isEvaluatedOrSet = true;
}