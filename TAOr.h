#pragma once
#include "TAOperatorBinary.h"
class TAOr :
	public TAOperatorBinary
{
public:
	TAOr(TA* input_first_argument, TA* input_second_argument);
	TAOr(TA* input_first_argument, TA* input_second_argument, std::string input_name);
	~TAOr();
	std::string getType() override;
};

