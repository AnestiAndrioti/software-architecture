#include "TAXor.h"



TAXor::TAXor(TA* input_first_operator, TA* input_second_operator)
{
	if (input_first_operator->getType() != typeid(bool).name() || input_second_operator->getType() != typeid(bool).name())
	{
		throw std::invalid_argument("Arguments are not a boolean.");
	}
	first_operator = input_first_operator;
	second_operator = input_second_operator;
}

TAXor::TAXor(TA* input_first_argument, TA* input_second_argument, std::string input_name) : TAXor(input_first_argument, input_second_argument)
{
	name = input_name;
}


TAXor::~TAXor()
{
	delete first_operator;
	delete second_operator;
	delete &name;
	delete this;
}

std::string TAXor::getType()
{
	return typeid(bool).name();
}