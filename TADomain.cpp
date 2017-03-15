#include "TADomain.h"



TADomain::TADomain()
{
	
}

void TADomain::add(TAType* object)
{
	values.push_back(object);
}

std::vector<TAType *> TADomain::getValues()
{
	return values;
}
void TADomain::list()
{
	if(values.size() > 0)
	{
		std::cout << "(";
		for (int i = 0; i < values.size() - 1; i++)
			std::cout << values[i] << ", ";
		std::cout << values[values.size() - 1] << ")";
	}
	else
	{
		std::cout << "(phi)";
	}
}
TADomain::~TADomain()
{
}
