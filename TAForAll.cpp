#include "TAForAll.h"



TAForAll::TAForAll()
{
}


void TAForAll::evaluate()
{
	std::vector<TAType*> values = domain->getValues();

	delete value;
	value = new bool(true);

	for (int i = 0; i < values.size(); i++)
	{
		freeVariable = values[i];
		exp->evaluate();
		if (!*(bool*)exp->getValue())
		{
			value = new bool(false);
			break;
		}
	}
}


TAForAll::TAForAll(TAType * input_FV, TAOperator * input_exp, TADomain * input_domain)
{
	if (!checkFreeVariable(input_FV, input_exp))
	{
		throw std::invalid_argument("Free Variable already used");
	}

	name = "For All";
}

TAForAll::~TAForAll()
{
}
