#include "TAFloor.h"



TAFloor::TAFloor(TA* input_first_operator)
{
	if (input_first_operator->getType() == typeid(bool).name())
	{
		throw std::invalid_argument("Argument is a boolean.");
	}
}

TAFloor::TAFloor(TA* input_first_operator, std::string input_name) : TAFloor(input_first_operator)
{
	name = input_name;
}


TAFloor::~TAFloor()
{
	delete first_operator;
	delete &name;
	delete this;
}

std::string TAFloor::getType()
{
	return typeid(int).name();
}
