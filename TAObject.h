#pragma once
#include <string>
#include <iostream>
#include "TATypeFactory.h"


class TAObject
{
protected:
	std::string name;

public:
	TAObject();
	~TAObject();
	const std::string getName();
	void setName(std::string name);
	TATypeFactory * taTypeFactory;
	virtual TAObject* createArray(int size);
	virtual std::string type();
};

