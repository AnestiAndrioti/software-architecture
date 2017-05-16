#include "TAXor.h"



TAXor::TAXor(TAData* input_first_operator, TAData* input_second_operator)
{
	if (input_first_operator->getType() != typeid(bool).name() || input_second_operator->getType() != typeid(bool).name())
	{
		throw std::invalid_argument("Arguments are not a boolean.");
	}
	first_operator = input_first_operator;
	second_operator = input_second_operator;
	setName("^");
	hasUserDefinedName = false;
}

TAXor::TAXor(TAData* input_first_argument, TAData* input_second_argument, std::string input_name) : TAXor(input_first_argument, input_second_argument)
{
	setName(input_name);
	hasUserDefinedName = true;
}


TAXor::~TAXor()
{
	delete first_operator;
	delete second_operator;
	delete &name;
}

std::string TAXor::getType()
{
	return typeid(bool).name();
}

void TAXor::evaluate()
{
	TABool *taLeftBoolOjbect = (TABool*)first_operator;
	TABool *taRightBoolOjbect = (TABool*)second_operator;

	bool answer = *(bool*)taLeftBoolOjbect->getValue() ^ *(bool*)taRightBoolOjbect->getValue();

	delete value;
	value = new bool(answer);

	isEvaluatedOrSet = true;
}