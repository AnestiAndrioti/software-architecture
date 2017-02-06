#pragma once
#include "TAOperatorBinary.h"
class TAAnd :
	public TAOperatorBinary
{
public:
	TAAnd(TA* input_first_argument, TA* input_second_argument);
	TAAnd(TA* input_first_argument, TA* input_second_argument, std::string input_name);
	~TAAnd();
	std::string getType() override;
};

