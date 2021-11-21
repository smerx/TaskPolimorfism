#pragma once

#include <corecrt_math_defines.h>
#include <iostream>
#include <string>
#include <math.h>
#include <array>
#include <system_error>

//find square by base class
using namespace std;

#include "area.cpp"

class Square : public area
{
	double a, b;

public:
	Square(double _a, double _b) : area()
	{
		this->type = "Square";
		this->a = _a;
		this->b = _b;
	};

	double get_area()
	{
		return a * b;
	}

	string who() {
		return this->type;
	}
};