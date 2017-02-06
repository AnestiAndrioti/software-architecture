#include "TAInt.h"



TAInt::TAInt()
{
}

TAInt::TAInt(std::string input_name)
{
	name = input_name;
}


TAInt::~TAInt()
{
	delete &name;
	delete &value;
	delete this;
}

std::string TAInt::getType()
{
	return typeid(value).name();
}

