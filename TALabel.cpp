#include "TALabel.h"

TALabel::TALabel(TAPort * input_port, TAFormula * input_guard, TAStatement * input_action) : port(input_port), guard(input_guard), action(input_action)
{

}


int TALabel::getPortId()
{
	return port->getId();
}



TAPort * TALabel::getPort()
{
	return port;
}



TAFormula * TALabel::getGuard()
{
	return guard;
}


TAStatement * TALabel::getAction()
{
	return action;
}


void TALabel::setPort(TAPort * input_port)
{
	port = input_port;
}


void TALabel::setGuard(TAFormula * input_guard)
{
	guard = input_guard;
}


void TALabel::setAction(TAStatement * input_action)
{
	action = input_action;
}

void TALabel::list()
{
	std::cout << "LAbel{port: ";
	port->list();
	std::cout << ", guard: ";
	guard->list();
	std::cout << ", action: ";
	action->list();
	std::cout << "}";
}

TALabel TALabel::operator=(const TALabel & rhs)
{

	this->port = rhs.port;
	this->guard = rhs.guard;
	this->action = rhs.action;
	return *this;
}