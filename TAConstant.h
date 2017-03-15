#pragma once
#include "TAType.h"
class TAConstant :
	public TAData
{
private:
	std::string type;

public:
	TAConstant(int input_value);
	TAConstant(double input_value);
	TAConstant(bool input_value);
	TAConstant(int input_value, std::string input_name);
	TAConstant(double input_value, std::string input_name);
	TAConstant(bool input_value, std::string input_name);

	~TAConstant();
	std::string getType() override;
};

