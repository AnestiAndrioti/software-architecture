#pragma once
#include "TAType.h"
class TAInt :
	public TAType
{
public:
	TAInt();
	TAInt(std::string input_name);
	~TAInt();
	std::string getType() override;

private:
	int value;
};

