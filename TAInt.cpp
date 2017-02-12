#include "TAInt.h"

TAInt::TAInt(std::string input_name)
{
	setName(input_name);
	value = new int();
}


TAInt::~TAInt()
{
	delete &name;
	delete value;
	delete this;
}

std::string TAInt::getType()
{
	return typeid(int).name();
}

void TAInt::set(int input_value)
{
	delete value;
	value = new int(input_value);

	isEvaluatedOrSet = true;
}
