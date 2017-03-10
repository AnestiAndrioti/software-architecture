#pragma once
#include "TAOperator.h"
#include "TADomain.h"
#include "TAType.h"

class TAQuantifiers :
	public TAOperator
{
protected:
	TAType *freeVariable;
	TAOperator *exp;
	TADomain *domain;

public:
	void list() override;
	bool checkFreeVariable(TAType* fv, TAOperator * op);

	TAQuantifiers();
	~TAQuantifiers();
};

