#include "Polynomial.h"
#include <cmath>

float Polynomial::evaluate(float x) const
{
	return (a_value_*x*x*x + b_value_*x*x  + c_value_*x + d_value_);
}