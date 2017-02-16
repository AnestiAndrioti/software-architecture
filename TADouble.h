#pragma once
#include "TAType.h"
class TADouble :
	public TAType
{
private:
	TADouble();

public:
	TADouble(std::string input_name);
	~TADouble();
	std::string getType() override;
	void set(double input_value);
	TAObject * createArray(int size) override;
	std::string type() override;
};

