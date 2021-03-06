#pragma once
#include "TAOperatorBinary.h"
#include "TABool.h"
#include "TAFormula.h"


class TAOr :
	public TAOperatorBinary, public TAFormula
{
public:
	TAOr(TAData* input_first_argument, TAData* input_second_argument);
	TAOr(TAData* input_first_argument, TAData* input_second_argument, std::string input_name);
	~TAOr();
	std::string getType() override;
	void evaluate();
};

