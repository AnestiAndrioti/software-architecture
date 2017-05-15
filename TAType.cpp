#include "TAType.h"

//template<class T>
//TAType<T>::TAType()
TAType::TAType()
{	
}

//template<class T>
TAType::~TAType()
{
	delete &name;
	delete value;
	delete this;
}

void TAType::setValue(void * taOperator)
{
	value = taOperator;
}

