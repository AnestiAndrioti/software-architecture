#include "TA.h"



TA::TA()
{
	isEvaluatedOrSet = false;
}


TA::~TA()
{
	delete &name;
	delete this;
	delete value;
}

std::string TA::getType()
{
	return std::string();
}

void TA::list()
{
	std::cout << getName();
}

std::string TA::getName()
{
	return name;
}
void TA::setName(std::string input_name)
{
	name = input_name;
}
void* TA::getValue()
{
	return value;
}

void TA::printState()
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