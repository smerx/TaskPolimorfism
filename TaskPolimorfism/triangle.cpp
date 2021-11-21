#include <corecrt_math_defines.h>
#include <iostream>
#include <string>
#include <math.h>
#include <array>
#include <system_error>
//find triangle by base class
using namespace std;

#include "area.cpp"

class Triangle : public area
{
	int a,h;

public:
	Triangle(double _a, double _h) :area()
	{
		this->type = "Triangle";
		this->h = _h;
		this->a = _a;
	}

	double get_area()
	{
		return (a * h * 0.5);
	}

	string who() {
		return this->type;
	}
};