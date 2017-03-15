#include "TAQuantifiers.h"



TAQuantifiers::TAQuantifiers()
{
}


TAQuantifiers::~TAQuantifiers()
{
}

void TAQuantifiers::list()
{
	std::cout << "(" << getName() << " " << freeVariable->getName() << " in ";
	domain->list();
	std::cout << ", ";
	exp->list();
	std::cout << ")";
}

bool TAQuantifiers::checkFreeVariable(TAType* fv, TAOperator * op)
{	
	if (this == op)
	{
		return exp->checkFreeVariable(fv, op);
	}
	else
	{
		return freeVariable != fv && exp->checkFreeVariable(fv, op);
	}
}
