#include "TAFormula.h"



TAFormula::TAFormula()
{
}


TAFormula::~TAFormula()
{
}

std::vector<TAData*> TAFormula::getOperands()
{
	std::vector<TAData*> operands;
	operands.push_back(getFirstOperator());


	if (TAOperatorBinary* binaryOp = dynamic_cast<TAOperatorBinary*>(this)) {
		operands.push_back(binaryOp->second_operator);
	}
	return operands;
}
