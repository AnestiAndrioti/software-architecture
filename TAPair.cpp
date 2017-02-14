#include "TAPair.h"



TAPair::TAPair(TAData* input_first_argument, TAData* input_second_argument)
{
	first_argument = input_first_argument;
	second_argument = input_second_argument;
}

TAPair::TAPair(TAData* input_first_argument, TAData* input_second_argument, std::string input_name) : TAPair(input_first_argument, input_second_argument)
{
	name = input_name;
}


TAPair::~TAPair()
{
}

TAData * TAPair::first()
{
	return first_argument;
}

TAData * TAPair::next()
{
	return second_argument;
}
