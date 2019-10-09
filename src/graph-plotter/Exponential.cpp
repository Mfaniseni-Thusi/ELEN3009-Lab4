#include "Exponential.h"
#include <cmath>

float Exponential::evaluate(float x) const
{
	return (a_value_* exp(b_value_*x));
}