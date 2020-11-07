/*
静态成员 在成员变量和成员函数前加static

静态成员变量
    所有对象共享同一份数据
    在编译阶段分配内存
    类内声明 类外初始化
静态成员函数
    所有对象共享同一个函数
    静态成员函数只能访问静态成员变量

静态成员函数 可以访问 静态成员变量
静态成员函数 不能访问 非静态成员变量

静态成员函数也有访问权限 类外访问不到私有静态成员函数

*/

#include <iostream>
using namespace std;

class person
{
private:
    /* data */
public:
    static int m_a;
    int m_b;
    static void func()
    {
        m_a = 100; // 静态成员函数 可以访问 静态成员变量
        // m_b = 200; // 静态成员函数 不能访问 非静态成员变量
        cout << "static void function" << endl;
    }
};

int person::m_a = 0;

void test()
{
    person p;
    p.func();
    person::func();
}

int main()
{
    test();
    return 0;
}
