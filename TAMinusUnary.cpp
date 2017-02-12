#include "TAMinusUnary.h"



TAMinusUnary::TAMinusUnary(TA* input_first_operator)
{
	if (input_first_operator->getType() == typeid(bool).name())
	{
		throw std::invalid_argument("Argument is a boolean.");
	}
	first_operator = input_first_operator;
	setName("-");
	hasUserDefinedName = false;
}

TAMinusUnary::TAMinusUnary(TA* input_first_operator, std::string input_name) : TAMinusUnary(input_first_operator)
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
		TAInt *taLeftOjbect = (TAInt*)first_operator;
		int answer = - *(int*)taLeftOjbect->getValue();
		value = new int(answer);
	}
	else
	{
		TADouble *taLeftOjbect = (TADouble*)first_operator;
		double answer = - *(double*)taLeftOjbect->getValue();
		value = new double(answer);
	}

	isEvaluatedOrSet = true;
}