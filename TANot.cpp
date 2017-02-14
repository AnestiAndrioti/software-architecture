#include "TANot.h"



TANot::TANot(TAData* input_first_operator)
{
	if (input_first_operator->getType() != typeid(bool).name())
	{
		throw std::invalid_argument("Argument is not a boolean.");
	}
	first_operator = input_first_operator;
	setName("not");
	hasUserDefinedName = false;
}

TANot::TANot(TAData* input_first_operator, std::string input_name) : TANot(input_first_operator)
{
	setName(input_name);
	hasUserDefinedName = true;

}


TANot::~TANot()
{
	delete first_operator;
	delete &name;
	delete value;
	delete this;
}

std::string TANot::getType()
{
	return typeid(bool).name();
}

void TANot::evaluate()
{
	TABool *taLeftBoolOjbect = (TABool*)first_operator;

	bool answer = !(*(bool*)taLeftBoolOjbect->getValue());

	delete value;
	value = new bool(answer);

	isEvaluatedOrSet = true;
}