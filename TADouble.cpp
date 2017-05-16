#include "TADouble.h"
#include "TABool.h"


TADouble::TADouble()
{

}

TADouble::TADouble(std::string input_name)
{
	setName(input_name);
	value = new double();
	taTypeFactory->addToMap(typeid(this).name(), this);
}


TADouble::~TADouble()
{
	delete &name;
	delete value;
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

TAObject* TADouble::createArray(int size)
{
	TADouble * arr;
	arr = new TADouble[size];
	return arr;
}

std::string TADouble::type()
{
	return typeid(this).name();
}