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

