#pragma once

#include <string>
#include <iostream>

//template<class T>
class TA
{

protected:
	std::string name;
	void* value;
	bool isEvaluatedOrSet;

public :
	TA();
	~TA();
	virtual std::string getType();
	virtual void list();
	virtual void printState();
	std::string getName();
	void setName(std::string name);
	void* getValue();
};

