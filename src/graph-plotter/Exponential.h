#ifndef EXPONENTIAL_H
#define EXPONENTIAL_H
#include "Function.h"

class Exponential: public Function  // Logic Layer
{
public:
	Exponential(float a_value=1.0, float b_value = 1.5):
	a_value_(a_value),
	b_value_(b_value)
	{}

	virtual float evaluate(float x) const override;

private:
	float a_value_;
	float b_value_;
};

#endif