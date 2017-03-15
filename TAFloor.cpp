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
	delete this;
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
		answer = floor(*(double*)first_operator->getValue());
	}
	else if (first_operator->getType() == typeid(int).name())
	{
		answer = floor(*(int*)first_operator->getValue());
	}

	value = new int(answer);

	isEvaluatedOrSet = true;
}