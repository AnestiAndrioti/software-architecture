#include "TAOperatorBinary.h"



TAOperatorBinary::TAOperatorBinary()
{
}


TAOperatorBinary::~TAOperatorBinary()
{
	delete &name;
	delete this;
}
