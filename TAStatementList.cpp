#include "TAStatementList.h"



TAStatementList::TAStatementList(TAStatementAtomic* input_atomic_statement, TAStatement* input_statement)
{
	atomic_statement = input_atomic_statement;
	statement = input_statement;
}


TAStatementList::~TAStatementList()
{
}
