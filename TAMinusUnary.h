#pragma once
#include "TAOperatorUnary.h"
#include "TAInt.h"
#include "TADouble.h"

class TAMinusUnary :
	public TAOperatorUnary
{
public:
	TAMinusUnary(TAData* input_first_operator);
	TAMinusUnary(TAData* input_first_operator, std::string input_name);
	~TAMinusUnary();
	std::string getType() override;
	void evaluate() override;

};

