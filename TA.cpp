#include "TA.h"



TA::TA()
{
}


TA::~TA()
{
	delete &name;
	delete this;
}

std::string TA::getType()
{
	return std::string();
}
