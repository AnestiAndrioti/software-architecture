#pragma once
#include "TAOperatorBinary.h"
#include "TAInt.h"
#include "TADouble.h"
#include "TAFormula.h"


class TAMoreThan :
	public TAOperatorBinary, public TAFormula
{
public:
	TAMoreThan(TAData* input_first_argument, TAData* input_second_argument);
	TAMoreThan(TAData* input_first_argument, TAData* input_second_argument, std::string input_name);
	~TAMoreThan();
	std::string getType() override;
	void evaluate() override;
};

