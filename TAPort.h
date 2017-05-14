#pragma once
#include "TAObject.h"

class TAPort :
	public TAObject
{
public:
	TAPort(int id, std::string name);
	~TAPort();
	void list();

	int getId();
	std::string getName();
	TAPort operator=(const TAPort& rhs);


private:
	std::string name;
	int id;
};

