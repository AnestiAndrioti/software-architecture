#pragma once
#include "TAOperatorBinary.h"
#include "TABool.h"

class TAXor :
	public TAOperatorBinary
{
public:
	TAXor(TA* input_first_argument, TA* input_second_argument);
	TAXor(TA* input_first_argument, TA* input_second_argument, std::string input_name);
	~TAXor();
	std::string getType() override;
	void evaluate();
};

