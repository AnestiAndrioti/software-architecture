#pragma once
#include "TAObject.h"

class TAStatement :
	public TAObject
{

public:
	TAStatement();
	~TAStatement();
	virtual void list();

	virtual void evaluate();
};