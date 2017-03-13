#include "TAConditional.h"



TAConditional::TAConditional(TAOperator* input_exp, TAStatement* input_statement1, TAStatement* input_statement2)
{
	exp = input_exp;
	statement1 = input_statement1;
	statement2 = input_statement2;
}


TAConditional::~TAConditional()
{
}

void TAConditional::evaluate()
{
	exp->evaluate();

	if (*(bool*)exp->getValue())
	{
		statement1->evaluate();
	}
	else
	{
		statement2->evaluate();
	}
}