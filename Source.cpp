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
#include "TAConstant.h"
#include "TAArray.h"
#include "TAArrayAccess.h"
#include "TAPair.h"
#include "TAPlus.h"
#include "TAXor.h"
#include "ReturnBoolInterface.h"

using namespace std;

template <typename T, typename = typename std::enable_if<std::is_base_of<TAAnd, T>::value && std::is_base_of<ReturnBoolInterface, T>::value>::type>
void test(T* t) {
	cout << 2 <<endl;
}

int main()
{
	/*
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


	TAConstant *N = new TAConstant(16);	TAConstant *one = new TAConstant(1);

	TAPair *p = new TAPair(x, d);

	TAArray *a = new TAArray("a", x->type(), N);
	TAInt *i = new TAInt("i");
	TAPlus *exp = new TAPlus(i, one);

	TAArrayAccess *ai = new TAArrayAccess(a, exp);
	TAPair *p2 = new TAPair(ai, x);	i->set(1);	exp->evaluate();	//ai->set(7);  not working
	*/




	TABool* b1 = new TABool("b1");
	TABool* b2 = new TABool("b2");
	TAAnd* a = new TAAnd(b1,b2);
	//TAXor* a = new TAXor(b1, b2);
	test(a);
	system("PAUSE");
	return 0;
}