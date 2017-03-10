#pragma once
#include "TAQuantifiers.h"

class TAExist :
	public TAQuantifiers
{
public:
	TAExist();
	void evaluate() override;
	TAExist(TAType * input_FV, TAOperator * input_exp, TADomain * input_domain);
	~TAExist();
};

