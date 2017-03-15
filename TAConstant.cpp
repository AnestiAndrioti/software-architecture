#include "TAConstant.h"


TAConstant::TAConstant(int input_value)
{
	delete value;
	value = new int(input_value); 
	type = "int";
}

TAConstant::TAConstant(double input_value)
{
	delete value;
	value = new double(input_value);
	type = "double";

}

TAConstant::TAConstant(bool input_value)
{
	delete value;
	value = new bool(input_value);
	type = "bool";
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

TAConstant::~TAConstant()
{
}

std::string TAConstant::getType()
{
	if(type == "int")
		return typeid(int).name();

	if(type == "double")
		return typeid(double).name();
	
	if(type == "bool")
		return typeid(bool).name();

	return typeid(NULL).name();
}