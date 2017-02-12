#pragma once
#include "TAOperatorUnary.h"
#include "TABool.h"

class TANot :
	public TAOperatorUnary
{
public:
	TANot(TA* input_first_operator);
	TANot(TA* input_first_operator, std::string name);
	~TANot();
	std::string getType() override;
	void evaluate() override;
};

