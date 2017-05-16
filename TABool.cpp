#include "TABool.h"

TABool::TABool()
{

}

TABool::TABool(std::string input_name)
{
	name = input_name;
	value = new bool();
	taTypeFactory->addToMap(typeid(this).name(), this);
}


TABool::~TABool()
{
	delete &name;
	delete value;
}

std::string TABool::getType()
{
	return typeid(bool).name();
}

void TABool::set(bool input_value)
{
	delete value;
	value = new bool(input_value);
	isEvaluatedOrSet = true;
}

TAObject* TABool::createArray(int size)
{
	TABool * arr;
	arr = new TABool[size];
	return arr;
}

std::string TABool::type()
{
	return typeid(this).name();
}