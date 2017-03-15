#pragma once

#include "TAObject.h"
#include "TATypeFactory.h"

//template<class T>
class TAData :
	public TAObject
{

protected:
	void* value;
	bool isEvaluatedOrSet;

public :
	TAData();
	~TAData();
	virtual std::string getType();
	virtual void list();
	virtual void printState();
	void* getValue();
};

