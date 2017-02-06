#pragma once
#include "TAOperator.h"
class TAOperatorBinary :
	public TAOperator
{
public:
	TA *second_operator;
	TAOperatorBinary();
	~TAOperatorBinary();
};

