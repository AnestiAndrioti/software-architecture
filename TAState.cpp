#include "TAState.h"


TAState::TAState(int id, std::string name) : id(id), name(name)
{
}

TAState::~TAState()
{
}

void TAState::list()
{
	std::cout << "State{id: " << id << ", name: " << name << "}";
}

int TAState::getId()
{
	return id;
}

std::string TAState::getName()
{
	return name;
}

TAState TAState::operator=(const TAState & rhs)
{
	this->id = rhs.id;
	this->name = rhs.name;
	return *this;
}
