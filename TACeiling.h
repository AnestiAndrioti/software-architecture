#pragma once
#include "TAOperatorUnary.h"
class TACeiling :
	public TAOperatorUnary
{
public:
	TACeiling(TA* input_first_operator);
	TACeiling(TA* input_first_operator, std::string input_name);
	~TACeiling();
	std::string getType() override;

};

