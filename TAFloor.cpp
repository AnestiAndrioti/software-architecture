#include "TAFloor.h"
#include "TAInt.h"
#include "TADouble.h"
#include <cmath>


TAFloor::TAFloor(TAData* input_first_operator)
{
	if (input_first_operator->getType() == typeid(bool).name())
	{
		throw std::invalid_argument("Argument is a boolean.");
	}
	setName("Floor");
	hasUserDefinedName = false;
}

TAFloor::TAFloor(TAData* input_first_operator, std::string input_name) : TAFloor(input_first_operator)
{
	setName(input_name);
	hasUserDefinedName = true;
}


TAFloor::~TAFloor()
{
	delete first_operator;
	delete &name;
}

std::string TAFloor::getType()
{
	return typeid(int).name();
}

void TAFloor::evaluate()
{
	delete value;

	int answer;

	if (first_operator->getType() == typeid(double).name())
	{
		TADouble* taLeftOjbect = (TADouble*)first_operator;
		answer = (int)floor(*(double*)taLeftOjbect->getValue());
	}
	else if (first_operator->getType() == typeid(int).name())
	{
		TAInt* taLeftOjbect = (TAInt*)first_operator;
		answer = (int)floor(*(int*)taLeftOjbect->getValue());
	}

	value = new int(answer);

	isEvaluatedOrSet = true;
}