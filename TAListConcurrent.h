#pragma once
#include "TAStatementList.h"
#include "TAAssignment.h"
class TAListConcurrent :
	public TAStatementList
{
public:
	TAListConcurrent(TAStatementAtomic* input_atomic_statement, TAStatement* input_statement);
	~TAListConcurrent();

	void evaluate() override;
};

