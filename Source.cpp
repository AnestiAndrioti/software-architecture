#include <iostream>
#include "TAInt.h"
#include "TABool.h"
#include "TAMinusUnary.h"
#include "TACeiling.h"
#include "TALessThan.h"
#include "TAAnd.h"
#include "TADouble.h"
#include "TAFloor.h"
#include "TACeiling.h"

int main()
{
	TAInt* x = new TAInt("x");
	TADouble* d = new TADouble("d");
	TACeiling* y = new TACeiling(d);
	y->evaluate();
	TABool* b = new TABool("b");

	TALessThan* t1 = new TALessThan(x, y);
	TAAnd* t2 = new TAAnd(b, t1);

	t2->list();
	std::cout << std::endl;

	x->set(5);
	d->set(2.3);

	b->set(true);

	t1->evaluate();
	t1->printState();

	d->set(5.3);
	y->evaluate();
	t1->evaluate();
	t1->printState();


	system("PAUSE");
	return 0;
}