#pragma once
#include <string>
#include <iostream>
#include "Header.h"

class TAObject
{
protected:
	std::string name;

public:
	TAObject();
	~TAObject();
	std::string getName();
	void setName(std::string name);
};

