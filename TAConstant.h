#pragma once
#include "TAType.h"
class TAConstant :
	public TAObject
{
private:
	const void* value;

public:
	TAConstant(int inpu_value);
	TAConstant(double inpu_value);
	TAConstant(bool inpu_value);
	TAConstant(int inpu_value, std::string input_name);
	TAConstant(double inpu_value, std::string input_name);
	TAConstant(bool inpu_value, std::string input_name);
	const void* getValue();

	~TAConstant();
};

