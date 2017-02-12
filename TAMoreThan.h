#pragma once
#include "TAOperatorBinary.h"
#include "TAInt.h"
#include "TADouble.h"
class TAMoreThan :
	public TAOperatorBinary
{
public:
	TAMoreThan(TA* input_first_argument, TA* input_second_argument);
	TAMoreThan(TA* input_first_argument, TA* input_second_argument, std::string input_name);
	~TAMoreThan();
	std::string getType() override;
	void evaluate() override;
};

