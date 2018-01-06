// Katie Mays
// Nov 13, 2017
// call by value (calling altered copy of value)

#include <iostream>
using namespace std;

// prototype
void outputFunc(int&);

int main()
{
	int a;

	a = 100;
	outputFunc(a);
	cout << "a = " << a << endl;

	return 0;
}
// how to change from call by value to call by reference ? add '&'
// no longer a copy, but actual variable
void outputFunc(int& x)
{
	cout << "x = " << x << endl;
	x++;
	x++;
	cout << "x = " << x << endl;
}
