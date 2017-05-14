#pragma once
#include "TAObject.h"

class TAState :
	public TAObject
{
public:
	TAState(int id, std::string name);
	~TAState();
	void list();
	
	int getId();
	std::string getName();
	TAState operator=(const TAState& rhs);

private:
	std::string name;
	int id;

};

