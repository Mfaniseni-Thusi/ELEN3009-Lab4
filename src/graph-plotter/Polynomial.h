#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include "Function.h"

class Polynomial: public Function  // Logic Layer
{
public:
	Polynomial(float a_value=3.0, float b_value = 1.0, float c_value=2.0, float d_value=5.0):
	a_value_(a_value),
	b_value_(b_value),
	c_value_(c_value),
	d_value_(d_value)
	{}

	virtual float evaluate(float x) const override;

private:
	float a_value_;
	float b_value_;
	float c_value_;
	float d_value_;
};

#endif