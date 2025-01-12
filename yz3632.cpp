// Author: yz3632
// extracts exponent of the number
// Rename this file to xlllogb.cpp and implement XLL.LOGB which calls logb
// Add documentation and a test function that runs in debug mode.


#include "xllfloat.h"

#ifndef CATEGORY
#define CATEGORY "Float"
#endif

using namespace xll;

static AddInX xai_logb(
	FunctionX(XLL_DOUBLE, _T("?xll_logb"), _T("LOGB"))
	.Arg(XLL_DOUBLE, _T("x"), _T("is a floating point number "))
	.Category(CATEGORY)
	.FunctionHelp(_T("Returns the exponent part of x where 0.5 le sig lt 1 and x = sig*2^exp"))
	.Documentation(LR"(
        Return the exponent of a floating point number.
    )")
);
double* WINAPI
xll_logb(double x)
{
#pragma XLLEXPORT
	double s;
	s = logb(x)+1;
	return &s;
}

#if _DEBUG

xll::test test_xll_logb([]() {

})