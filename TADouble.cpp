#include "TADouble.h"
#include "TABool.h"


TADouble::TADouble(std::string input_name)
{
	setName(input_name);
	value = new double();
}


TADouble::~TADouble()
{
	delete &name;
	delete value;
	delete this;
}

std::string TADouble::getType()
{
	return typeid(double).name();
}

void TADouble::set(double input_value)
{
	delete value;
	this->value = new double(input_value);
	isEvaluatedOrSet = true;
}