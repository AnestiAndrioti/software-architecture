#pragma once
#include "TAStatementAtomic.h"
#include "TAOperator.h"

class TALoop :
	public TAStatementAtomic
{

private:
	TAStatement* statement;
	TAOperator* exp;

public:
	TALoop(TAStatement* input_statement, TAOperator* input_exp);
	~TALoop();

	void evaluate() override;

};

