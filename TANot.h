#pragma once
#include "TAOperatorUnary.h"
#include "TABool.h"
#include "TAFormula.h"

class TANot :
	public TAOperatorUnary, public TAFormula
{
public:
	TANot(TAData* input_first_operator);
	TANot(TAData* input_first_operator, std::string name);
	~TANot();
	std::string getType() override;
	void evaluate() override;
};

