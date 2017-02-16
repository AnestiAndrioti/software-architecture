#pragma once
#include "TAData.h"
#include "TAArray.h"
#include "TAInt.h"
#include "TABool.h"
#include "TAPair.h"
#include "TADouble.h"

class TAArrayAccess :
	public TAObject
{
private:
	TAArray * arr;
	TAData * exp;

public:
	TAArrayAccess(TAArray *input_TAArray, TAData * taObject);
	~TAArrayAccess();
	void set(int in_value);
	void set(double in_value);
	void set(bool in_value);
	void set(TAInt in_value);
	void set(TADouble in_value);
	void set(TABool in_value);
	void set(TAPair in_value);
	void set(TAArray in_value);
	TAArray * getArray();
	TAData * getExp();
	TAObject getArrayElement();
};

