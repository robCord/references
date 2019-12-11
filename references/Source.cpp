#include <iostream>

using namespace std;

void swapVal(int a, int b);
void swapRef(int& a, int& b);

void main()
{
	int a = 5;
	int b = 6;

	cout << "a = " << a << " b = " << b << endl;

	swapVal(a, b);

	cout << "a = " << a << " b = " << b << endl;

	swapRef(a, b);

	cout << "a = " << a << " b = " << b << endl;
}

void swapVal(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << " b = " << b << endl;
}


void swapRef(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << " b = " << b << endl;
}