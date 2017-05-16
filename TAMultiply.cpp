#include "TAMultiply.h"


TAMultiply::TAMultiply(TAData* input_first_operator, TAData* input_second_operator)
{
	if (input_first_operator->getType() == typeid(bool).name() || input_first_operator->getType() != input_second_operator->getType())
	{
		throw std::invalid_argument("Invalid Arguments.");
	}
	first_operator = input_first_operator;
	second_operator = input_second_operator;
	setName("*");
	hasUserDefinedName = false;
}

TAMultiply::TAMultiply(TAData* input_first_argument, TAData* input_second_argument, std::string input_name) : TAMultiply(input_first_argument, input_second_argument)
{
	setName(input_name);
	hasUserDefinedName = true;
}

TAMultiply::~TAMultiply()
{
	delete first_operator;
	delete second_operator;
	delete &name;
	delete value;
}

std::string TAMultiply::getType()
{
	return typeid(first_operator).name();
}

void TAMultiply::evaluate()
{
	delete value;

	if (first_operator->getType() == typeid(int).name())
	{
		TAInt *taLeftOjbect = (TAInt*)first_operator;
		TAInt *taRightOjbect = (TAInt*)second_operator;
		int answer = (*(int*)taLeftOjbect->getValue()) * (*(int*)taRightOjbect->getValue());
		value = new int(answer);
	}
	else
	{
		TADouble *taLeftOjbect = (TADouble*)first_operator;
		TADouble *taRightOjbect = (TADouble*)second_operator;
		double answer = (*(double*)taLeftOjbect->getValue()) * (*(double*)taRightOjbect->getValue());
		value = new double(answer);
	}

	isEvaluatedOrSet = true;
}