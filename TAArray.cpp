#include "TAArray.h"


TAArray::TAArray()
{

}

TAArray::TAArray(std::string input_name, std::string input_array_type, TAConstant* input_const)
{
	double sizeDouble = *(double *)input_const->getValue();
	if (!double_is_int(sizeDouble))
	{
		std::cout << "Value argument in TAConstant shoud be a int." << std::endl;
		throw std::invalid_argument("Value argument in TAConstant shoud be a int.");
	}

	name = input_name;
	size = *(int *)input_const->getValue();
	taTypeFactory = TATypeFactory::getInstance();
	TAObject *taObject = (TAObject*)taTypeFactory->getFromMap(input_array_type);
	arr = taObject->createArray(size);
	taTypeFactory->addToMap(typeid(this).name(), this);
}


TAArray::~TAArray()
{
}

TAObject & TAArray::operator[](const int index)
{
	return arr[index];
}

const int TAArray::getSize()
{
	return size;
}

bool TAArray::double_is_int(double number) {
	double absolute = abs(number);
	bool isInt =  (absolute == floor(absolute));
	return isInt;
}

TAObject* TAArray::createArray(int size)
{
	TAArray * arr;
	arr = new TAArray[size];
	return arr;
}

std::string TAArray::type()
{
	return typeid(this).name();
}
