#pragma once
#include "TAOperatorBinary.h"
#include "TAData.h"

class TAFormula 
{
public:
	TAFormula();
	~TAFormula();
	std::vector<TAData*> getOperands();

	virtual void evaluate() = 0;
	virtual void list() = 0;
	virtual TAData * getFirstOperator() = 0;
	virtual void* getValue() = 0;
	virtual void printState() = 0;
};

