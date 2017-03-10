#pragma once
#include "TAOperator.h"
class TATernaryCondition :
	public TAOperator
{
private:
	TAOperator* e1;
	TAOperator* e2;
	TAOperator* e3;
public:
	TATernaryCondition(TAOperator * input_e1, TAOperator *input_e2, TAOperator* input_e3);
	void evaluate() override;
	void list() override;
	~TATernaryCondition();
};

