#pragma once
#include "TAOperatorBinary.h"
#include "TAInt.h"
#include "TADouble.h"

class TADivide :
	public TAOperatorBinary
{
public:
	TADivide(TAData* input_first_argument, TAData* input_second_argument);
	TADivide(TAData* input_first_argument, TAData* input_second_argument, std::string input_name);
	~TADivide();
	std::string getType() override;
	void evaluate() override;
};

