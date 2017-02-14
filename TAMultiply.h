#pragma once
#include "TAOperatorBinary.h"
#include "TAInt.h"
#include "TADouble.h"
class TAMultiply :
	public TAOperatorBinary
{
public:
	TAMultiply(TAData* input_first_argument, TAData* input_second_argument);
	TAMultiply(TAData* input_first_argument, TAData* input_second_argument, std::string input_name);
	~TAMultiply();
	std::string getType() override;
	void evaluate() override;
};

