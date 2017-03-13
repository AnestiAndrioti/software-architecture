#include "TAListConcurrent.h"


TAListConcurrent::TAListConcurrent(TAStatementAtomic* input_atomic_statement, TAStatement* input_statement) : TAStatementList(input_atomic_statement, input_statement)
{

}


TAListConcurrent::~TAListConcurrent()
{
}

void TAListConcurrent::evaluate()
{
	TAAssignment * assignment = (TAAssignment*)atomic_statement;
	assignment->evaluateExpression();
	statement->evaluate();
	assignment->assign();
}
