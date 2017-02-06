#pragma once
#include "TA.h"

//template<typename T>
class TAOperator :
	public TA
{
public:
	TA *first_operator;
	TAOperator();
	~TAOperator();
};

