#pragma once
#include "TAOperatorBinary.h"
#include "TAInt.h"
#include "TADouble.h"
#include "TAFormula.h"


class TALessThan :
	public TAOperatorBinary, public TAFormula
{
public:
	TALessThan(TAData* input_first_argument, TAData* input_second_argument);
	TALessThan(TAData* input_first_argument, TAData* input_second_argument, std::string input_name);
	~TALessThan();
	std::string getType() override;
	void evaluate() override;
};

