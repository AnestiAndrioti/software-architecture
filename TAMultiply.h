#pragma once
#include "TAOperatorBinary.h"
class TAMultiply :
	public TAOperatorBinary
{
public:
	TAMultiply(TA* input_first_argument, TA* input_second_argument);
	TAMultiply(TA* input_first_argument, TA* input_second_argument, std::string input_name);
	~TAMultiply();
	std::string getType() override;
};

