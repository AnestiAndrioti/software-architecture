#include "TAExist.h"

TAExist::TAExist()
{
}


void TAExist::evaluate()
{
	std::vector<TAType*> values = domain->getValues();

	delete value;
	value = new bool(false);

	for (int i = 0; i < values.size(); i++)
	{
		freeVariable = values[i];
		exp->evaluate();
		if (*(bool*)exp->getValue())
		{
			value = new bool(true);
			break;
		}
	}
}


TAExist::TAExist(TAType * input_FV, TAOperator * input_exp, TADomain * input_domain)
{
	if (!checkFreeVariable(input_FV, input_exp))
	{
		throw std::invalid_argument("Free Variable already used");
	}

	name = "There exist";
}

TAExist::~TAExist()
{
}
