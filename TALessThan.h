#pragma once
#include "TAOperatorBinary.h"
class TALessThan :
	public TAOperatorBinary
{
public:
	TALessThan(TA* input_first_argument, TA* input_second_argument);
	TALessThan(TA* input_first_argument, TA* input_second_argument, std::string input_name);
	~TALessThan();
	std::string getType() override;

};

