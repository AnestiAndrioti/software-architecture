#pragma once
#include "TAObject.h"
class TAPair :
	public TAObject
{
private:
	TAObject* first_argument;
	TAObject* second_argument;
	TAPair();

public:
	TAPair(TAObject* input_first_argument, TAObject* input_second_argument);
	TAPair(TAObject* input_first_argument, TAObject* input_second_argument, std::string input_name);
	~TAPair();
	TAObject* first();
	TAObject* next();
	std::string type() override;
	TAObject * createArray(int size) override;
};

