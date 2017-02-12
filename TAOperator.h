#pragma once
#include "TA.h"

//template<typename T>
class TAOperator :
	public TA
{

public:
	bool hasUserDefinedName;
	TA *first_operator;
	virtual void evaluate();
	TAOperator();
	~TAOperator();
};

