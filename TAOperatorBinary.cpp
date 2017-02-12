#include "TAOperatorBinary.h"



TAOperatorBinary::TAOperatorBinary()
{
}


TAOperatorBinary::~TAOperatorBinary()
{
	delete &name;
	delete this;
}

void TAOperatorBinary::list()
{
	if (hasUserDefinedName)
		std::cout << getName() << std::endl;

	else
	{
		std::cout << "(" << getName() << " ";
		first_operator->list();
		std::cout << " ";
		second_operator->list();
		std::cout << " )";
	}
}