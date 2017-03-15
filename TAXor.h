#pragma once
#include "TAOperatorBinary.h"
#include "TABool.h"

class TAXor :
	public TAOperatorBinary
{
public:
	TAXor(TAData* input_first_argument, TAData* input_second_argument);
	TAXor(TAData* input_first_argument, TAData* input_second_argument, std::string input_name);
	~TAXor();
	std::string getType() override;
	void evaluate();
};

