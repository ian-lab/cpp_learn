#include <iostream>
#include <string>
#include <time.h>
#include <math.h>

using namespace std;

// 指针与数组
// 数组名就是数组首地址
// 
// 
int main()
{
    int arr[5] = {0, 1, 2, 3, 4};
    int *p = arr;
    for (int i = 0; i < 5; i++)
    {
        cout << *(p++) << endl;
    }

    return 0;
}