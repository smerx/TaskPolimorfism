#include <corecrt_math_defines.h>
#include <iostream>
#include <string>
#include <math.h>
#include <array>
#include <system_error>

//find circle by area
using namespace std;

#include "area.cpp"

class Circle : public area
{
	double R;

public:
	Circle(double _R) : area()
	{
		this->type = "Circle";
		this->R = _R;
	}

	double get_area()
	{
		return M_PI * R * R;
	}
};