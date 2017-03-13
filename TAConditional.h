#pragma once
#include "TAStatementAtomic.h"
#include "TAOperator.h"

class TAConditional :
	public TAStatementAtomic
{

private:
	TAOperator* exp;
	TAStatement* statement1;
	TAStatement* statement2;

public:
	TAConditional(TAOperator* input_exp, TAStatement* input_statement1, TAStatement* input_statement2);
	~TAConditional();

	void evaluate() override;

};

