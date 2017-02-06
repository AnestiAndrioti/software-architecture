#include "TADouble.h"



TADouble::TADouble()
{
}

TADouble::TADouble(std::string input_name)
{
	name = input_name;
}


TADouble::~TADouble()
{
	delete &name;
	delete &value;
	delete this;
}

std::string TADouble::getType()
{
	return typeid(value).name();
}
