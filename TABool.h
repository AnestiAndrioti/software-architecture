#pragma once
#include "TAType.h"
#include <string>

class TABool : public TAType
{
public:
	TABool();
	TABool(std::string input_name);
	~TABool();
	std::string getType() override;


private:
	bool value;

};