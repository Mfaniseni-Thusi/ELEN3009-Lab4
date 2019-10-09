#include "Graph.h"
#include "Sinusoid.h"
#include "Polynomial.h"
#include "Sampler.h"
#include "Display.h"
#include "SolidLineStyle.h"
#include "DottedLineStyle.h"
#include "Points.h"
#include <memory>

using std::shared_ptr;
using std::make_shared;

const float PI = 3.14159265359;

int main()
{
	// setup Graph with Display
	const auto WIDTH = 800;
	const auto HEIGHT = 600;
	auto display = make_shared<Display>(WIDTH, HEIGHT);
	auto graph = Graph{display};

	// create sine and cosine functions
	auto amplitude = 1.0f;
	auto frequency = 1.0f;
	auto phase = 0.0f;
	auto sine_function = Sinusoid{amplitude, frequency, phase};
	auto cosine_function = Sinusoid{amplitude, frequency, phase + PI/2};

// Polynomial coefficients
	auto a_value = 0.0f;
	auto b_value = 1.0f;
	auto c_value = 2.0f;
	auto d_value = 1.0f;
	auto polynomial_function = Polynomial{a_value, b_value, c_value, d_value};

// Exponential coefficients
	auto a_Evalue = 1.0f;
	auto b_Evalue = 1.5f;
	auto exponential_function = Exponential{a_Evalue, b_Evalue};
    
	// generate range and plot graphs
	auto range = Range{0, 6*PI};
	auto solid_red = SolidLineStyle{Colour::Red, display};
	auto solid_green = SolidLineStyle{Colour::Green, display};
	graph.plot(generateDataPoints(sine_function, range), solid_red);

	auto solid_blue = SolidLineStyle{Colour::Blue, display};
	graph.plot(generateDataPoints(cosine_function, range), solid_blue);

	auto dotted_red = DottedLineStyle{Colour::Red, display};
	graph.plot(generateDataPoints(sine_function, range), solid_red);
    
    range = Range{-3, 1.5};
	auto polynomial = SolidLineStyle{Colour::Green, display};
	graph.plot(generateDataPoints(polynomial_function, range), solid_green);
    
	auto exponential = SolidLineStyle{Colour::Blue, display};
	graph.plot(generateDataPoints(exponential_function, range), solid_green);
	return 0;
}

// Sinusoids are not smooth because they are sampled with few points, 
// to rectify this a sampling factor or TOTAL_POINTS in each sinusoids are increased