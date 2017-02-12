#include "TAAnd.h"

TAAnd::TAAnd(TA* input_first_operator, TA* input_second_operator)
{
	if (input_first_operator->getType() != typeid(bool).name() || input_second_operator->getType() != typeid(bool).name())
	{
		throw std::invalid_argument("Arguments are not a boolean.");
	}
	first_operator = input_first_operator;
	second_operator = input_second_operator;
	this->setName("&");
	hasUserDefinedName = false;
}

TAAnd::TAAnd(TA* input_first_argument, TA* input_second_argument, std::string input_name) : TAAnd(input_first_argument, input_second_argument)
{
	this->setName(input_name);
	hasUserDefinedName = true;

}

TAAnd::~TAAnd()
{
	delete first_operator;
	delete second_operator;
	delete &name;
	delete this;
}

std::string TAAnd::getType()
{
	return typeid(bool).name();
}

void TAAnd::evaluate()
{
		TABool *taLeftBoolOjbect = (TABool*)first_operator;
		TABool *taRightBoolOjbect = (TABool*)second_operator;

		bool answer = *(bool*)taLeftBoolOjbect->getValue() & *(bool*)taRightBoolOjbect->getValue();

		delete value;
		value = new bool(answer);

		isEvaluatedOrSet = true;
}

