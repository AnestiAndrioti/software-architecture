#include "TACeiling.h"

TACeiling::TACeiling(TAData* input_first_operator)
{
	if (input_first_operator->getType() == typeid(bool).name())
	{
		throw std::invalid_argument("Argument is a boolean.");
	}
	first_operator = input_first_operator;
	setName("ceiling");
	hasUserDefinedName = false;


}

TACeiling::TACeiling(TAData* input_first_operator, std::string input_name) : TACeiling(input_first_operator)
{
	setName(input_name);
	hasUserDefinedName = true;

}


TACeiling::~TACeiling()
{
	delete first_operator;
	delete &name;
}

std::string TACeiling::getType()
{
	return typeid(int).name();
}

void TACeiling::evaluate()
{
	delete value;

	int answer;
	if (first_operator->getType() == typeid(double).name())
	{
		TADouble* taLeftOjbect = (TADouble*)first_operator;

		answer = (int)ceil(*(double*)taLeftOjbect->getValue());
	}
	else if (first_operator->getType() == typeid(int).name())
	{
		TAInt* taLeftOjbect = (TAInt*)first_operator;
		answer = (int)ceil(*(int*)taLeftOjbect->getValue());
	}

	value = new int(answer);

	isEvaluatedOrSet = true;

}
