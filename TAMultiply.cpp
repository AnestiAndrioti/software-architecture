#include "TAMultiply.h"


TAMultiply::TAMultiply(TA* input_first_operator, TA* input_second_operator)
{
	if (input_first_operator->getType() == typeid(bool).name() || input_first_operator->getType() != input_second_operator->getType())
	{
		throw std::invalid_argument("Invalid Arguments.");
	}
	first_operator = input_first_operator;
	second_operator = input_second_operator;
}

TAMultiply::TAMultiply(TA* input_first_argument, TA* input_second_argument, std::string input_name) : TAMultiply(input_first_argument, input_second_argument)
{
	name = input_name;
}

TAMultiply::~TAMultiply()
{
	delete first_operator;
	delete second_operator;
	delete &name;
	delete this;
}

std::string TAMultiply::getType()
{
	return typeid(first_operator).name();
}
