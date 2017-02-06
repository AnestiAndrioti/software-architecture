#pragma once
#include "TAOperatorBinary.h"
class TADivide :
	public TAOperatorBinary
{
public:
	TADivide(TA* input_first_argument, TA* input_second_argument);
	TADivide(TA* input_first_argument, TA* input_second_argument, std::string input_name);
	~TADivide();
	std::string getType() override;
};
