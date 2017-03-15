#pragma once
#include "TAStatementList.h"

class TAListSequential :
	public TAStatementList
{
public:
	TAListSequential(TAStatementAtomic* input_atomic_statement, TAStatement* input_statement);
	~TAListSequential();

	void evaluate() override;
};

