#pragma once
#include "TAObject.h"
#include "TAConstant.h"

class TAArray :
	public TAObject
{

private:
	TAObject* arr;
	int size;
	bool double_is_int(double number);
	TAObject * createArray(int size);
	std::string type() override;
	TAArray();

public:
	TAArray(std::string input_name, std::string input_array_type, TAConstant * input_const);
	~TAArray();
	TAObject& operator[](int index);
	const int getSize();

};

