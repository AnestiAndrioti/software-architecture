#pragma once
#include "TAData.h"
class TAPair :
	public TAObject
{
private:
	TAData* first_argument;
	TAData* second_argument;
public:
	TAPair(TAData* input_first_argument, TAData* input_second_argument);
	TAPair(TAData* input_first_argument, TAData* input_second_argument, std::string input_name);
	~TAPair();
	TAData* first();
	TAData* next();
};

