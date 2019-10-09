#ifndef SINUSOID_H
#define SINUSOID_H

#include "Function.h"

class Sinusoid: public Function  // Logic Layer
{
public:
	Sinusoid(float amplitude=1.0, float frequency = 1.0, float phase=0.0):
	amplitude_(amplitude),
	frequency_(frequency),
	phase_(phase)
	{}

	virtual float evaluate(float x) const override;

private:
	float amplitude_;
	float frequency_;
	float phase_;
};

#endif