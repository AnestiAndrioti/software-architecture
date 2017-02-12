#pragma once
#include "TAOperatorBinary.h"
#include "TABool.h"

class TAImplies :
	public TAOperatorBinary
{
public:
	TAImplies(TA* input_first_argument, TA* input_second_argument);
	TAImplies(TA* input_first_argument, TA* input_second_argument, std::string input_name);
	~TAImplies();
	std::string getType() override;
	void evaluate() override;
};

