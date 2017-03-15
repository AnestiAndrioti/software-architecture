#include "TAObject.h"



TAObject::TAObject()
{
	taTypeFactory = TATypeFactory::getInstance();
}


TAObject::~TAObject()
{
}

const std::string TAObject::getName()
{
	return name;
}
void TAObject::setName(std::string input_name)
{
	name = input_name;
}

TAObject* TAObject::createArray(int size)
{
	TAObject * arr;
	arr = new TAObject[size];
	return arr;
}

std::string TAObject::type()
{
	return typeid(this).name();
}