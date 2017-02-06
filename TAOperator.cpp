#include "TAOperator.h"



TAOperator::TAOperator()
{

}


TAOperator::~TAOperator()
{
	delete &name;
	delete this;
}
