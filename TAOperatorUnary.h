#pragma once
#include "TAOperator.h"
class TAOperatorUnary :
	public TAOperator
{
public:
	TAOperatorUnary();
	~TAOperatorUnary();
	void list() override;
};

