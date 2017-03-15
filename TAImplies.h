#pragma once
#include "TAOperatorBinary.h"
#include "TABool.h"

class TAImplies :
	public TAOperatorBinary
{
public:
	TAImplies(TAData* input_first_argument, TAData* input_second_argument);
	TAImplies(TAData* input_first_argument, TAData* input_second_argument, std::string input_name);
	~TAImplies();
	std::string getType() override;
	void evaluate() override;
};

