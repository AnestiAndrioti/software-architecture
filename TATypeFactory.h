#pragma once
#include <unordered_map>

class TATypeFactory
{	
private:
	std::unordered_map <std::string, void * const>  _factories;
	TATypeFactory();
	static TATypeFactory * taTypeFactory;
	static bool instanceFlag;

public:
	static TATypeFactory * getInstance();
	void addToMap(std::string type, void * taObject);
	void * getFromMap(std::string key);
	~TATypeFactory();
};

