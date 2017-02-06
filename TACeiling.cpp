#include "TACeiling.h"

TACeiling::TACeiling(TA* input_first_operator)
{
	if (input_first_operator->getType() == typeid(bool).name())
	{
		throw std::invalid_argument("Argument is a boolean.");
	}
	first_operator = input_first_operator;

}

TACeiling::TACeiling(TA* input_first_operator, std::string input_name) : TACeiling(input_first_operator)
{
	name = input_name;
}


TACeiling::~TACeiling()
{
	delete first_operator;
	delete &name;
	delete this;
}

std::string TACeiling::getType()
{
	return typeid(int).name();
}
