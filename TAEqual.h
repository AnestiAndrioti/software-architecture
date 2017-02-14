#pragma once
#include "TAOperatorBinary.h"
#include "TABool.h"
#include "TAInt.h"
#include "TADouble.h"

class TAEqual :
	public TAOperatorBinary
{
public:
	TAEqual(TAData* input_first_argument, TAData* input_second_argument);
	TAEqual(TAData* input_first_argument, TAData* input_second_argument, std::string input_name);
	~TAEqual();
	std::string getType() override;
	void evaluate() override;
};

