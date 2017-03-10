#pragma once
#include "TAObject.h"
#include "TAArray.h"

class TADomain :
	public TAObject
{
private:
	std::vector<TAType *> values;

public:
	TADomain();
	void add(TAConstant *object);
	std::vector<TAType *> getValues();
	void list();
	~TADomain();
};

