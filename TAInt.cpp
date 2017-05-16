#include "TAInt.h"

TAInt::TAInt()
{


}
TAInt::TAInt(std::string input_name)
{
	setName(input_name);
	value = new int();
	taTypeFactory->addToMap(typeid(this).name(), this);
}


TAInt::~TAInt()
{
	delete &name;
	delete value;
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

TAObject* TAInt::createArray(int size)
{
	TAInt * arr;
	arr = new TAInt[size];
	return arr;
}

std::string TAInt::type()
{
	return typeid(this).name();
}