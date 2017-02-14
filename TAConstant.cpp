#include "TAConstant.h"


TAConstant::TAConstant(int input_value)
{
	delete value;
	value = new int(input_value);
}

TAConstant::TAConstant(double input_value)
{
	delete value;
	value = new double(input_value);

}

TAConstant::TAConstant(bool input_value)
{
	delete value;
	value = new bool(input_value);
}

TAConstant::TAConstant(int input_value, std::string input_name) : TAConstant(input_value)
{
	name = input_name;
}

TAConstant::TAConstant(double input_value, std::string input_name) : TAConstant(input_value)
{
	name = input_name;
}

TAConstant::TAConstant(bool input_value, std::string input_name) : TAConstant(input_value)
{
	name = input_name;
}

const void * TAConstant::getValue()
{
	return value;
}

TAConstant::~TAConstant()
{
}
