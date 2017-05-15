#pragma once
#include "TAObject.h"
#include "TAPort.h"
#include "TAFormula.h"
#include "TAStatement.h"

class TALabel :
	public TAObject
{
public:

	TALabel(TAPort * port, TAFormula * guard, TAStatement * action);

	int getPortId();
	TAPort * getPort();
	TAFormula * getGuard();
	TAStatement * getAction();
	void setPort(TAPort * port);
	void setGuard(TAFormula * guard);
	void setAction(TAStatement * action);
	void list();


	TALabel operator=(const TALabel & rhs);

private:
	TAPort * port;
	TAFormula * guard;
	TAStatement * action;
};

