#include <iostream>
#include <string>
#include <time.h>
#include <math.h>

using namespace std;

// 指针和函数
// 利用指针作为函数参数。可以修改实参的值
// 地址传递可以改变实参
//

void sw(int * a, int * b);
int main()
{
    int a = 1;
    int b = 2;

    cout << a << " 1 " << b << endl;

    sw(&a, &b);

    cout << a << " 4 " << b << endl;

    // system("pause");
    return 0;
}

void sw(int * a, int * b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}