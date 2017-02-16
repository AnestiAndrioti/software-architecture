#pragma once
#include "TAType.h"
#include <string>

class TABool : public TAType
{
private:
	TABool();
public:
	TABool(std::string input_name);
	~TABool();
	std::string getType() override;
	void set(bool input_value);
	TAObject * createArray(int size) override;
	std::string type() override;
};