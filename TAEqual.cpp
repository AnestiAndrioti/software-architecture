#include "TAEqual.h"




TAEqual::TAEqual(TA* input_first_operator, TA* input_second_operator)
{
	if (input_first_operator->getType() != input_second_operator->getType())
	{
		throw std::invalid_argument("Operands not of the same type.");
	}
	first_operator = input_first_operator;
	second_operator = input_second_operator;
}

TAEqual::TAEqual(TA* input_first_argument, TA* input_second_argument, std::string input_name) : TAEqual(input_first_argument, input_second_argument)
{
	name = input_name;
}


TAEqual::~TAEqual()
{
	delete first_operator;
	delete second_operator;
	delete &name;
	delete this;
}

std::string TAEqual::getType()
{
	return typeid(bool).name();
}
