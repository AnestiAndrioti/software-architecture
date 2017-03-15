#include "TALessThan.h"

TALessThan::TALessThan(TAData* input_first_operator, TAData* input_second_operator)
{
	if (input_first_operator->getType() == typeid(bool).name() || input_first_operator->getType() != input_second_operator->getType())
	{
		throw std::invalid_argument("Invalid Arguments.");
	}
	first_operator = input_first_operator;
	second_operator = input_second_operator;
	setName("<");
	hasUserDefinedName = false;
}

TALessThan::TALessThan(TAData* input_first_argument, TAData* input_second_argument, std::string input_name) : TALessThan(input_first_argument, input_second_argument)
{
	setName(input_name);
	hasUserDefinedName = true;
}

TALessThan::~TALessThan()
{
	delete first_operator;
	delete second_operator;
	delete &name;
	delete value;
	delete this;
}

std::string TALessThan::getType()
{
	return typeid(bool).name();
}

void TALessThan::evaluate()
{
	delete value;
	bool answer;

	if (first_operator->getType() == typeid(int).name())
	{
		answer = *(int*)first_operator->getValue() < *(int*)second_operator->getValue();
	}
	else
	{
		answer = *(double*)first_operator->getValue() < *(double*)second_operator->getValue();
	}
	value = new bool(answer);
	isEvaluatedOrSet = true;
}