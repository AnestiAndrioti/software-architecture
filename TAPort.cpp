#include "TAPort.h"


TAPort::TAPort(int id, std::string name) : id(id), name(name)
{
}

TAPort::~TAPort()
{
}

void TAPort::list()
{
	std::cout << "Port{id: " << id << ", name: " << name << "}";
}

int TAPort::getId()
{
	return id;
}

std::string TAPort::getName()
{
	return name;
}

TAPort TAPort::operator=(const TAPort & rhs)
{
	this->id = rhs.id;
	this->name = rhs.name;
	return *this;
}
