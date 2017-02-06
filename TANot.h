#pragma once
#include "TAOperatorUnary.h"
class TANot :
	public TAOperatorUnary
{
public:
	TANot(TA* input_first_operator);
	TANot(TA* input_first_operator, std::string name);
	~TANot();
	std::string getType() override;
};

