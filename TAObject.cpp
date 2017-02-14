#include "TAObject.h"



TAObject::TAObject()
{
}


TAObject::~TAObject()
{
}

std::string TAObject::getName()
{
	return name;
}
void TAObject::setName(std::string input_name)
{
	name = input_name;
}

