#include "TAAssignment.h"



TAAssignment::TAAssignment(TAType* input_target, TAOperator* input_exp)
{
	if (input_target->getType() != input_exp->getType())
	{
		throw std::invalid_argument("Invalid Arguments.");
	}
	target = input_target;
	exp = input_exp;
}


TAAssignment::~TAAssignment()
{
}

void TAAssignment::evaluate()
{
	evaluateExpression();
	assign();
}

void TAAssignment::evaluateExpression()
{
	exp->evaluate();
}

void TAAssignment::assign()
{
	target->setValue(exp->getValue());
}
