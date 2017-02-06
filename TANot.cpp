#include "TANot.h"



TANot::TANot(TA* input_first_operator)
{
	if (input_first_operator->getType() != typeid(bool).name())
	{
		throw std::invalid_argument("Argument is not a boolean.");
	}
	first_operator = input_first_operator;
}

TANot::TANot(TA* input_first_operator, std::string input_name) : TANot(input_first_operator)
{
	//TANot::TANot(input_first_operator);
	name = input_name;
}


TANot::~TANot()
{
	delete first_operator;
	delete &name;
	delete this;
}

std::string TANot::getType()
{
	return typeid(bool).name();
}
