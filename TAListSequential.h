#pragma once
#include "TAStatementList.h"
#include "TAStatementAtomic.h"
class TAListSequential :
	public TAStatementList
{
public:
	TAListSequential(TAStatementAtomic* input_atomic_statement, TAStatement* input_statement);
	~TAListSequential();
};

