#include <iostream>
#include <string>

using namespace std;
//base class, interface
class area
{
protected:
	string type;

public:

	area() {};

	string who()
	{
		return this->type;
	}

	virtual double get_area() = 0;
};