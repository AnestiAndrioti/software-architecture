#pragma once
#include "TAOperatorBinary.h"
#include "TAInt.h"
#include "TADouble.h"
class TAMinusBinary :
	public TAOperatorBinary
{
public:
	TAMinusBinary(TA* input_first_argument, TA* input_second_argument);
	TAMinusBinary(TA* input_first_argument, TA* input_second_argument, std::string input_name);
	~TAMinusBinary();
	std::string getType() override;
	void evaluate() override;

};

