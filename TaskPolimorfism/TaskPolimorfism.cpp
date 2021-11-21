#include <corecrt_math_defines.h>
#include <iostream>
#include <string>
#include <math.h>
#include <array>
#include <system_error>
#include "area.cpp"
#include "Square.cpp"
#include "Triangle.cpp"
#include "Circle.cpp"

using namespace std;

int main()
{
	try{
	Square s(3, 9);
	Triangle t(4, 6);
	Circle c(10);

	area* f;
	cout << "Everything is OK";
	}
	catch(exception){
		cout << "Error";
	}
	return 0;
}