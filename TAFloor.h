#pragma once
#include "TAOperatorUnary.h"
class TAFloor :
	public TAOperatorUnary
{
public:
	TAFloor(TA* input_first_operator);
	TAFloor(TA* input_first_operator, std::string input_name);
	~TAFloor();
	std::string getType() override;
	void evaluate() override;
};

