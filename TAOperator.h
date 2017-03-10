#pragma once
#include "TAData.h"
#include "TAType.h"

//template<typename T>
class TAOperator :
	public TAData
{

public:
	bool hasUserDefinedName;
	TAData *first_operator;
	virtual void evaluate();
	virtual bool checkFreeVariable(TAType* fv, TAOperator* op);
	virtual void* getValue();

	TAOperator();
	~TAOperator();
};

