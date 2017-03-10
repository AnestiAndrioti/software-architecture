#pragma once
#include "TAOperatorBinary.h"
#include "TABool.h"
//#include "ReturnBoolInterface.h"

class TAAnd :
	public TAOperatorBinary, public ReturnBoolInterface
{
public:
	//template <typename T, typename = typename std::enable_if<std::is_base_of<TAData, T>::value && std::is_base_of<ReturnBoolInterface, T>::value>::type...>
	//TAAnd(T* input_first_argument, T* input_second_argument);
	//
	//template <typename T, typename = typename std::enable_if<std::is_base_of<TAData, T>::value && std::is_base_of<ReturnBoolInterface, T>::value>::type...>
	//TAAnd(T* input_first_argument, T* input_second_argument, std::string input_name);

	TAAnd::TAAnd(TAData* input_first_operator, TAData* input_second_operator);
	TAAnd::TAAnd(TAData* input_first_operator, TAData* input_second_operator, std::string input_name);
	
	~TAAnd();
	std::string getType() override;
	void evaluate() override;
};

