#include "TABool.h"

TABool::TABool()
{
}

TABool::TABool(std::string input_name)
{
	name = input_name;
}


TABool::~TABool()
{
	delete &name;
	delete &value;
	delete this;
}

std::string TABool::getType()
{
	return typeid(value).name();
}