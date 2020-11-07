// c++核心编程
/*
1.内存分区模型
-代码区 存放函数体的二进制代码，由操作系统进行管理
-全局区 存放全局变量和静态变量以及常量
-栈区   由编译器自动分配释放，存放函数的参数和局部变量等
-堆区   由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收

new     在堆区开辟数据,返回数据类型的指针
delete  释放

引用(别名)
int b; 
int &a = b;

引用必须初始化，初始化后不能改变

引用做函数参数，利用引用让形参修饰实参，简化指针修改实参的方法
不能返回局部变量的引用
函数的调用可以作为左值

引用的本质是一个指针常量，指针的指向不能修改，指向的内容可以修改

常量引用 用来修饰形参，防止误操作
在函数形参列表中，可以添加const修饰形参，防止形参改变实参

const int &a; 
void fun(const int &a)
{
    a = 100; // 错误，不能修改
}

*/
#include <iostream>
using namespace std;


void test01()
{
    // 利用new关键字 ，将数据开辟到堆区
    int *p = new int(10);
    cout << *p << endl;
    delete p;             //释放数据
}

void test02()
{
    int *arr = new int[10]; // 创建数组

    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;
    }

    for (int i = 0; i < 10;  i++)
    {
        cout << arr[i] << "  ";
    }
    delete[] arr; // 释放数组 加[]
}


// 引用做参数
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    // new使用
    // test02();

    // 引用基本使用
    // int a = 10;
    // int &b = a; // 引用
    // cout << a << endl;
    // cout << b << endl;

    // b = 100;
    // cout << a << endl;
    // cout << b << endl;  

    // 引用做函数参数

    int a = 10;
    int b = 20;
    swap(a, b);

    cout << a << endl;
    cout << b << endl;


}

