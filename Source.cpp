#include <iostream>
#include "TAInt.h"
#include "TABool.h"
#include "TAMinusUnary.h"
#include "TACeiling.h"
#include "TALessThan.h"
#include "TAAnd.h"
#include "TADouble.h"
#include "TAFloor.h"

int main()
{
	TAInt *x = new TAInt();
	TADouble *d = new TADouble("d");
	TACeiling *y = new TACeiling(d, "hi");

	TABool *b = new TABool("b");
	TALessThan *t1 = new TALessThan(x, y);
	TAAnd *t2 = new TAAnd(b, t1);

	system("PAUSE");
	return 0;
}