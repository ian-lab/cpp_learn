#include <iostream>
#include <string>
#include <time.h>
#include <math.h>
#include "swap.h"

using namespace std;

// 函数声明
int adder(int a, int b);

int main()
{

	int a = 1, b = 2;
	cout << adder(1, 2) << endl;
	swap(a, b);

	cout << a << endl;
	system("pause");
	return 0;
}

int adder(int a, int b)
{
	int sum = 0;
	sum = a + b;
	return sum;
}
