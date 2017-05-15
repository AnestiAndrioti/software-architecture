#pragma once
#include "TAData.h"

//template<class T>
class TAType : public TAData
{
public:

	TAType();
	~TAType();
	virtual void setValue(void * taOperator);
//	T value;
//	std::string getType() override;
};

