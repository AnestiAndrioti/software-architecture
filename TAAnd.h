#pragma once
#include "TAOperatorBinary.h"
#include "TABool.h"

class TAAnd :
	public TAOperatorBinary
{
public:
	TAAnd(TAData* input_first_argument, TAData* input_second_argument);
	TAAnd(TAData* input_first_argument, TAData* input_second_argument, std::string input_name);
	~TAAnd();
	std::string getType() override;
	void evaluate() override;
};

