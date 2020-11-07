/*
对象的初始化和清理

构造函数和析构函数
构造函数 创建对象时为对象的成员属性进行赋值，由编译器自动调用，完成对象初始化和清理工作
析构函数 对象销毁前系统自动调用，执行一些清理工作

构造函数：类名(){}
    没有返回值也不写void
    函数名称与类名相同
    构造函数可以有参数，可以发生重载
    程序调用对象时会自动调用构造，无需手动调用，而且只会调用一次

析构函数：~类名(){}
    没有返回值也不写void
    函数名称与类名相同，在名称前加~
    析构函数不可以有参数，不可以发生重载
    程序在对象销毁时会自动调用析构，无需手动调用，而且只会调用一次

构造函数的分类及调用
    分类
        按参数分为 有参构造和无参构造
        按类型分为 普通构造和拷贝构造
    三种调用方式
        括号法
        显示法
        隐式转换法

深浅拷贝
浅拷贝：简单的复制拷贝操作
深拷贝：在堆区重新申请空间，进行拷贝操作

浅拷贝会导致堆区的内存重复释放，通过深拷贝解决
如果成员属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题

初始化列表
    用来初始化属性
    语法：构造函数():属性1(值1),属性1(值1)...{}


*/
#include <iostream>
#include <string>
using namespace std;

class person
{
public:
    int m_age;
    int *m_height;
    string m_name;
    /* data */
public:
    // 构造函数
    // 无参构造 初始化列表进行初始化
    person(/* args */) : m_age(10), m_height(new int(160))
    {
        cout << "person 无参构造函数的调用" << endl;
    }
    // 有参构造
    person(int a, int height) : m_age(a), m_height(new int(height))
    {
        // m_height = new int(height);
        // m_age = a;
        cout << "person 有参构造函数的调用" << endl;
    }
    // 拷贝构造函数，实现深拷贝
    person(const person &p)
    {
        m_age = p.m_age;

        // m_height = p.m_height;
        // 深拷贝,重新开辟内存空间
        m_height = new int(*p.m_height);

        cout << "person 拷贝构造函数的调用" << endl;
    }

    // 析构函数 将堆区开辟的数据做释放操作
    ~person()
    {
        // 将堆区开辟的数据做释放操作
        if (m_height !=  NULL) {
            delete m_height;
            m_height = NULL;
        }
        cout << "person 析构函数的调用" << endl;
    }
};

// 调用
void test01()
{
    // 1、括号法
    // person p1; // 调用默认构造参数时，不要加()
    // person p2(10);
    // person p3(p2);
    // cout << p2.age << endl;
    // cout << p3.age << endl;

    // 2、显示法
    // person p1;
    // person p2 = person(10);
    // person p3 = person(p2);

    // person(10); // 单独写是匿名对象，当前行执行结束后，系统会立即回收

    // 不要利用拷贝构造函数初始化匿名对象,编译器会认为它是一个对象的声明
    // person(p3);

    // 3、隐式转换法
    // person p4 = 10; // 相当于person p4 = person(10); 有参构造
    // person p5 = p4; // 拷贝构造

    // person p1(18, 160);
    // cout << "p1的年龄为 " << p1.m_age << " p1的身高为 " << *p1.m_height << endl;
    // person p2(p1);
    // cout << "p2的年龄为 " << p1.m_age << " p2的身高为 " << *p1.m_height << endl;

    person p1(18, 456);
    
    cout << "p1的年龄为 " << p1.m_age << " p1的身高为 " << *p1.m_height << endl;
}

int main()
{
    // person p1;
    // person p2;
    test01();
    

    // system("pause");
}
