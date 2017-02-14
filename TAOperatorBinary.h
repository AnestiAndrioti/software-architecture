#pragma once
#include "TAOperator.h"
class TAOperatorBinary :
	public TAOperator
{
public:
	TAData *second_operator;
	TAOperatorBinary();
	~TAOperatorBinary();
	void list() override;
};

