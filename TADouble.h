#pragma once
#include "TAType.h"
class TADouble :
	public TAType
{
public:
	TADouble();
	TADouble(std::string input_name);
	~TADouble();
	std::string getType() override;

private:
	double value;

};

