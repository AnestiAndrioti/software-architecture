#pragma once
#include "TAOperatorBinary.h"
class TAEqual :
	public TAOperatorBinary
{
public:
	TAEqual(TA* input_first_argument, TA* input_second_argument);
	TAEqual(TA* input_first_argument, TA* input_second_argument, std::string input_name);
	~TAEqual();
	std::string getType() override;
};

