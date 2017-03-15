#pragma once
#include "TAOperatorBinary.h"
#include "TAInt.h"
#include"TADouble.h"
#include "TAConstant.h"

class TAPlus :
	public TAOperatorBinary
{
public:
	TAPlus(TAData* input_first_argument, TAData* input_second_argument);
	TAPlus(TAData* input_first_argument, TAData* input_second_argument, std::string input_name);
	~TAPlus();
	std::string getType() override;
	void evaluate() override;
};

