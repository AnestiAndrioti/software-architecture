#include "TAPair.h"

TAPair::TAPair()
{

}

TAPair::TAPair(TAObject* input_first_argument, TAObject* input_second_argument)
{
	first_argument = input_first_argument;
	second_argument = input_second_argument;
	taTypeFactory->addToMap(typeid(this).name(), this);
}

TAPair::TAPair(TAObject* input_first_argument, TAObject* input_second_argument, std::string input_name) : TAPair(input_first_argument, input_second_argument)
{
	name = input_name;
}


TAPair::~TAPair()
{
}

TAObject * TAPair::first()
{
	return first_argument;
}

TAObject * TAPair::next()
{
	return second_argument;
}

std::string TAPair::type()
{
	return typeid(this).name();
}

TAObject* TAPair::createArray(int size)
{
	TAPair * arr;
	arr = new TAPair[size];
	return arr;
}