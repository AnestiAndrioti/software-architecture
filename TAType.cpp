#include "TAType.h"

void TAType::setValue(void * input_value)
{
	value = input_value;
}

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

