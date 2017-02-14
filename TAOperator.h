#pragma once
#include "TAData.h"

//template<typename T>
class TAOperator :
	public TAData
{

public:
	bool hasUserDefinedName;
	TAData *first_operator;
	virtual void evaluate();
	TAOperator();
	~TAOperator();
};

