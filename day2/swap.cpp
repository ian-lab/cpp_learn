#include "swap.h"

void swap(int a, int b)
{
	int temp;
	cout << a << " "  << b << endl;
	temp = a;
	a = b;	b = temp; cout << a << " " << b << endl;
}