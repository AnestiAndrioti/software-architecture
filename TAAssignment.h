#pragma once
#include "TAStatementAtomic.h"
#include "TAType.h"
#include "TAOperator.h"

class TAAssignment :
	public TAStatementAtomic
{
private:
	TAType* target;
	TAOperator* exp;

public:
	TAAssignment(TAType* input_target, TAOperator* input_exp);
	~TAAssignment();

	void evaluate() override;
	void evaluateExpression();
	void assign();
};

