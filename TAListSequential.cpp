#include "TAListSequential.h"



TAListSequential::TAListSequential(TAStatementAtomic* input_atomic_statement, TAStatement* input_statement) : TAStatementList(input_atomic_statement, input_statement)
{

}


TAListSequential::~TAListSequential()
{
}

void TAListSequential::evaluate()
{
	atomic_statement->evaluate();
	statement->evaluate();
}
