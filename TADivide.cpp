#include "TADivide.h"


TADivide::TADivide(TA* input_first_operator, TA* input_second_operator)
{
	if (input_first_operator->getType() == typeid(bool).name() || input_first_operator->getType() != input_second_operator->getType())
	{
		throw std::invalid_argument("Invalid Arguments.");
	}
	first_operator = input_first_operator;
	second_operator = input_second_operator;
}

TADivide::TADivide(TA* input_first_argument, TA* input_second_argument, std::string input_name) : TADivide(input_first_argument, input_second_argument)
{
	name = input_name;
}

TADivide::~TADivide()
{
	delete first_operator;
	delete second_operator;
	delete &name;
	delete this;
}

std::string TADivide::getType()
{
	return typeid(first_operator).name();
}
