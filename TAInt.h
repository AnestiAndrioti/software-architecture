#pragma once
#include "TAType.h"

class TAInt :
	public TAType
{

private:
	TAInt(); //default constructor private because it should never be called unless for creating the TAInt array in createArray method

public:
	TAInt(std::string input_name);
	~TAInt();
	std::string getType() override;
	void set(int input_value);
	TAObject * createArray(int size) override;
	std::string type();
};

