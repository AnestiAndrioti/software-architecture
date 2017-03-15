#pragma once
#include "TAQuantifiers.h"

class TAForAll :
	public TAQuantifiers
{
private:

public:

	void evaluate() override;
	
	TAForAll(TAType* input_FV, TAOperator* input_exp, TADomain* input_domain);
	TAForAll();
	~TAForAll();
};

