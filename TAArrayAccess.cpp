#include "TAArrayAccess.h"


TAArrayAccess::TAArrayAccess(TAArray * input_TAArray, TAData * taData)
{
	arr = input_TAArray;
	exp = taData;
}

TAArrayAccess::~TAArrayAccess()
{
}

void TAArrayAccess::set(int in_value)
{
	TAInt arg("argument");
	arg.set(in_value); 
	set(arg);
}
void TAArrayAccess::set(double in_value)
{
	TADouble arg("argument");
	arg.set(in_value);
	set(arg);
}
void TAArrayAccess::set(bool in_value)
{
	TABool arg("argument");
	arg.set(in_value);
	set(arg);
}

void TAArrayAccess::set(TAInt in_value)
{
	int index = *(int*)exp->getValue();
	//arr[index] = in_value;
}

void TAArrayAccess::set(TADouble in_value)
{
	int index = *(int*)exp->getValue();
	//arr[index] = in_value;


}
void TAArrayAccess::set(TABool in_value)
{
	int index = *(int*)exp->getValue();
	//arr[index] = in_value;
}
void TAArrayAccess::set(TAPair in_value)
{
	int index = *(int*)exp->getValue();
	//arr[index] = in_value;
}
void TAArrayAccess::set(TAArray in_value)
{
	int index = *(int*)exp->getValue();
	//arr[index] = in_value;
}

TAArray * TAArrayAccess::getArray()
{
	return arr;
}

TAData * TAArrayAccess::getExp()
{
	return exp;
}

TAObject TAArrayAccess::getArrayElement()
{
	if(exp->getType() != "int")
	{
		std::cout << "Value argument in expression should be a int." << std::endl;
		throw std::invalid_argument("Value argument in expression should be a int.");
	}

	int index = *(int *)exp->getValue();
	return arr[index];
}
