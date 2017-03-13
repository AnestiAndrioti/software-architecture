#pragma once
#include "TAStatement.h"
#include "TAStatementAtomic.h"

class TAStatementList :
	public TAStatement
{
protected:
	TAStatementAtomic* atomic_statement;
	TAStatement* statement;
public:
	TAStatementList();
	~TAStatementList();
};

