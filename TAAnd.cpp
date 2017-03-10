#include "TAAnd.h"

//template <typename T, typename = typename std::enable_if<std::is_base_of<TAData, T>::value && std::is_base_of<ReturnBoolInterface, T>::value>::type...>
//TAAnd::TAAnd(T* input_first_operator, T* input_second_operator)
//{
//	if (input_first_operator->getType() != typeid(bool).name() || input_second_operator->getType() != typeid(bool).name())
//	{
//		throw std::invalid_argument("Arguments are not a boolean.");
//	}
//	first_operator = input_first_operator;
//	second_operator = input_second_operator;
//	this->setName("&");
//	hasUserDefinedName = false;
//}
//
//template <typename T, typename = typename std::enable_if<std::is_base_of<TAData, T>::value && std::is_base_of<ReturnBoolInterface, T>::value>::type...>
//TAAnd::TAAnd(T* input_first_argument, T* input_second_argument, std::string input_name) : TAAnd(input_first_argument, input_second_argument)
//{
//	this->setName(input_name);
//	hasUserDefinedName = true;
//
//}

TAAnd::TAAnd(TAData* input_first_operator, TAData* input_second_operator)
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

TAAnd::TAAnd(TAData* input_first_operator, TAData* input_second_operator, std::string input_name) : TAAnd(input_first_argument, input_second_argument)
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

template <typename T>
typename std::enable_if<
	std::is_base_of<TAData, T>::value && std::is_base_of<ReturnBoolInterface, T>::value
>::type foo(T* t) {

}