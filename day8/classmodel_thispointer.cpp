/*
c++对象模型和this指针

成员变量和成员函数分开存储

空对象占用内存空间为1个字节
编译器给每个空对象分配一个字节空间，是为了区分空对象占内存的位置
每个空对象也应该有一个独一无二的内存地址

成员变量 属于类的对象上
静态成员变量 不属于类的对象上
成员函数 不属于类的对象上
静态成员函数 不属于类的对象上

this指针 指向被调用的成员函数所属的对象
当形参和成员变量同名时，用this指针区分

*/

#include <iostream>
using namespace std;

class person
{
private:
    /* data */
public:
    int age;
    person(int age)
    {
        // this 指针指向 被调用的成员函数 所属的对象
        // p1在调用，就指向p1
        // 当形参和成员变量同名时，用this指针区分
        this->age = age;
    }
    person &personAddAge(person &p)
    {
        this->age += p.age;
        // 返回对象本身
        return *this;
    }

    int m_a;        // 属于类的对象上
    static int m_b; // 不属于类的对象上
    void func()     // 不属于类的对象上
    {
    }
    static void func1() // 不属于类的对象上
    {
    }
};
int person::m_b = 1;

void test01()
{
    person p1(10);
    cout << p1.age << endl;
    person p2(11);
    p2.personAddAge(p1).personAddAge(p1); // 链式编程思想
    cout << p2.age << endl;
    // cout << sizeof(p1) << endl;
}

void test02()
{
    person p(10);
    cout << sizeof(p) << endl;
}

int main()
{
    test01();

    return 0;
}
