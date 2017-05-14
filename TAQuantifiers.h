#pragma once
#include "TAOperator.h"
#include "TADomain.h"
#include "TAType.h"
#include "TAFormula.h"

class TAQuantifiers :
	public TAOperator, public TAFormula
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

