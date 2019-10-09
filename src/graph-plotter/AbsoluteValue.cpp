#include "AbsoluteValue.h"
#include <cmath>

float AbsoluteValue::evaluate(float x) const
{
	return std::abs(function_->evaluate(x));
}