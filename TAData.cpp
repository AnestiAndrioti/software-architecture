#include "TAData.h"



TAData::TAData()
{
	isEvaluatedOrSet = false;
}


TAData::~TAData()
{
	delete &name;
	delete this;
	delete value;
}

std::string TAData::getType()
{
	return std::string();
}

void TAData::list()
{
	std::cout << getName();
}

void* TAData::getValue()
{
	return value;
}

void TAData::printState()
{
	if (isEvaluatedOrSet)
	{
		std::string type = getType();
		if(type == "int")
			std::cout << *(int*)value << std::endl;
		else if (type == "double")
			std::cout << *(double*)value << std::endl;
		else if (type == "bool")
			std::cout << *(bool*)value << std::endl;
	}

	else
		std::cout << "Value still not evaluated for variable " << getName() << std::endl;
}