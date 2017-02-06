#include "TAMoreThan.h"




TAMoreThan::TAMoreThan(TA* input_first_operator, TA* input_second_operator)
{
	if (input_first_operator->getType() == typeid(bool).name() || input_first_operator->getType() != input_second_operator->getType())
	{
		throw std::invalid_argument("Invalid Arguments.");
	}
	first_operator = input_first_operator;
	second_operator = input_second_operator;
}

TAMoreThan::TAMoreThan(TA* input_first_argument, TA* input_second_argument, std::string input_name) : TAMoreThan(input_first_argument, input_second_argument)
{
	name = input_name;
}


TAMoreThan::~TAMoreThan()
{
	delete first_operator;
	delete second_operator;
	delete &name;
	delete this;
}

std::string TAMoreThan::getType()
{
	return typeid(bool).name();
}
