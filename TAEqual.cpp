#include "TAEqual.h"




TAEqual::TAEqual(TAData* input_first_operator, TAData* input_second_operator)
{
	if (input_first_operator->getType() != input_second_operator->getType())
	{
		throw std::invalid_argument("Operands not of the same type.");
	}
	first_operator = input_first_operator;
	second_operator = input_second_operator;
	setName("=");
	hasUserDefinedName = false;
}

TAEqual::TAEqual(TAData* input_first_argument, TAData* input_second_argument, std::string input_name) : TAEqual(input_first_argument, input_second_argument)
{
	setName(input_name);
	hasUserDefinedName = true;
}


TAEqual::~TAEqual()
{
	delete first_operator;
	delete second_operator;
	delete &name;
	delete this;
}

std::string TAEqual::getType()
{
	return typeid(bool).name();
}

void TAEqual::evaluate()
{
	delete value;
	bool answer;

	if (first_operator->getType() == typeid(int).name())
	{
		answer = *(int*)first_operator->getValue() == *(int*)second_operator->getValue();
	}
	else
	{
		answer = *(double*)first_operator->getValue() == *(double*)second_operator->getValue();
	}
	value = new bool(answer);
	isEvaluatedOrSet = true;
}
