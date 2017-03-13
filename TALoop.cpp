#include "TALoop.h"

TALoop::TALoop(TAStatement * input_statement, TAOperator * input_exp)
{
	statement = input_statement;
	exp = input_exp;
}

TALoop::~TALoop()
{
}

void TALoop::evaluate()
{
	exp->evaluate();

	while (*(bool*)exp->getValue())
	{
		statement->evaluate();
		exp->evaluate();
	}
}
