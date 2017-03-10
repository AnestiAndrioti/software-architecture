#include "TATernaryCondition.h"


TATernaryCondition::TATernaryCondition(TAOperator * input_e1, TAOperator * input_e2, TAOperator * input_e3)
{
	e1 = input_e1;
	e2 = input_e2;
	e3 = input_e3;
	name = "?:";
}

void TATernaryCondition::evaluate()
{
	delete value;
	if (e2->getType() == typeid(bool).name())
	{
		if (*(bool*)e1->getValue())
		{
			e2->evaluate();
			value = new bool(*(bool*)e2->getValue());
		}
		else
		{
			e3->evaluate();
			value = new bool(*(bool*)e3->getValue());
		}
	}
	else if (e2->getType() == typeid(int).name())
	{
		if (*(bool*)e1->getValue())
		{
			e2->evaluate();
			value = new int(*(int*)e2->getValue());
		}
		else
		{
			e3->evaluate();
			value = new int(*(int*)e3->getValue());
		}
	}
	else if (e2->getType() == typeid(double).name())
	{
		if (*(bool*)e1->getValue())
		{
			e2->evaluate();
			value = new double(*(double*)e2->getValue());
		}
		else
		{
			e3->evaluate();
			value = new double(*(double*)e3->getValue());
		}
	}

}

void TATernaryCondition::list()
{
	std::cout << "(" << getName() << " ";
	e1->list();
	std::cout << " ";
	e2->list();
	std::cout << " ";
	e3->list();
	std::cout << " )";
}

TATernaryCondition::~TATernaryCondition()
{
}
