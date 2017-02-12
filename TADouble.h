#pragma once
#include "TAType.h"
class TADouble :
	public TAType
{
public:
	TADouble(std::string input_name);
	~TADouble();
	std::string getType() override;
	void set(double input_value);
};

