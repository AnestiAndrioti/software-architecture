#include "TABool.h"

TABool::TABool(std::string input_name)
{
	name = input_name;
	value = new bool();
}


TABool::~TABool()
{
	delete &name;
	delete value;
	delete this;
}

std::string TABool::getType()
{
	return typeid(bool).name();
}

void TABool::set(bool input_value)
{
	delete value;
	value = new bool(input_value);
	isEvaluatedOrSet = true;
}
