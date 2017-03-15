#include "TATypeFactory.h"


bool TATypeFactory::instanceFlag = false;
TATypeFactory* TATypeFactory::taTypeFactory = NULL;


TATypeFactory::TATypeFactory()
{
}


TATypeFactory * TATypeFactory::getInstance()
{
	if (instanceFlag == false) {
		delete taTypeFactory;
		taTypeFactory = new TATypeFactory();
		instanceFlag = true;
	}
	
	return taTypeFactory;
}

void TATypeFactory::addToMap(std::string type, void * taObject)
{
	_factories.insert(std::make_pair(type, taObject));
}

void * TATypeFactory::getFromMap(std::string key)
{
	return _factories.at(key);
}

TATypeFactory::~TATypeFactory()
{
	instanceFlag = false;
	delete taTypeFactory;
}
