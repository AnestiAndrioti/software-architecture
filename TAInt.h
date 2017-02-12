#pragma once
#include "TAType.h"
class TAInt :
	public TAType
{
public:
	
	TAInt(std::string input_name);
	~TAInt();
	std::string getType() override;
	void set(int input_value);
};

