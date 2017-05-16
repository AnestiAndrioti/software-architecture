#include "TAOperatorUnary.h"



TAOperatorUnary::TAOperatorUnary()
{
}


TAOperatorUnary::~TAOperatorUnary()
{
	delete &name;
	delete value;
}

void TAOperatorUnary::list()
{
	if (hasUserDefinedName)
		std::cout << getName() << std::endl;

	else
	{
		std::cout << "(" << getName() << " ";
		first_operator->list();
		std::cout << " )";
	}
}
