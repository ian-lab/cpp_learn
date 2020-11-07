#include <iostream>
#include <string>

using namespace std;

// 指针 int * p = &a;
// p -> &a 地址
// *p -> a 数值

// 指针所占空间 32位操作系统占4个字节，64位操作系统占8个字节
// 指针类型与要指向的变量的数据类型一致，
// int a; int * a;
// float b; float * b;

// 空指针 指向0地址，其指向的内存空间无法访问(0-255内存空间为系统占用)，用于初始化指针变量
// int * p = NULL;

// 野指针 指针变量指向非法的内存空间 
// int * p = (int *)0x1100;(任意地址)

// 1
// const 修饰指针 -> 常量指针
// const int * p = &a; 常量指针
// 指针的指向可以修改，但是指针指向的值不能修改
// int a = 1; int b = 2; int * p;
// *p = 10;× p = &b;√
// 2
// const 修饰常量 -> 指针常量
// int * const p = &a; 指针常量
// 指针的指向不能修改，但是指针指向的值可以修改
// int a = 1; int b = 2; int * p;
// *p = 10;√ p = &b;×
// 3
// const 既修饰指针，又修饰常量
// const int * const p = &a;
// 指针的指向和指针指向的值都不可以修改
// int a = 1; int b = 2; int * p;
// *p = 10;× p = &b;×



int main()
{
    int a = 1;
    int * p = NULL;
    p = &a;
    *p = 100;
    cout << *p << endl;
    cout << p << endl;
    cout << sizeof(p) << endl;

    return 0;
}