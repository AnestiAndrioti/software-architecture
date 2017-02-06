#pragma once
#include "TAOperatorBinary.h"
class TAPlus :
	public TAOperatorBinary
{
public:
	TAPlus(TA* input_first_argument, TA* input_second_argument);
	TAPlus(TA* input_first_argument, TA* input_second_argument, std::string input_name);
	~TAPlus();
	std::string getType() override;
};
