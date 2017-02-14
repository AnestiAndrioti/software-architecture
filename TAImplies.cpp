#include "TAImplies.h"



TAImplies::TAImplies(TAData* input_first_operator, TAData* input_second_operator)
{
	if (input_first_operator->getType() != typeid(bool).name() || input_second_operator->getType() != typeid(bool).name())
	{
		throw std::invalid_argument("Arguments are not a boolean.");
	}
	first_operator = input_first_operator;
	second_operator = input_second_operator;
	setName("implies");
	hasUserDefinedName = false;
}

TAImplies::TAImplies(TAData* input_first_argument, TAData* input_second_argument, std::string input_name) : TAImplies(input_first_argument, input_second_argument)
{
	setName(input_name);
	hasUserDefinedName = true;
}


TAImplies::~TAImplies()
{
	delete first_operator;
	delete second_operator;
	delete &name;
	delete value;
	delete this;
}

std::string TAImplies::getType()
{
	return typeid(bool).name();
}

void TAImplies::evaluate()
{
	delete value;

	bool answer;

	TABool *taLeftBoolOjbect = (TABool*)first_operator;
	TABool *taRightBoolOjbect = (TABool*)second_operator;
	bool leftBool = *(bool*)taLeftBoolOjbect->getValue();
	bool rightBool = *(bool*)taRightBoolOjbect->getValue();

	answer = (leftBool && rightBool) || (!leftBool);

	value = new bool(answer);

	isEvaluatedOrSet = true;
}