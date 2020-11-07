/*
类和对象

面向对象的特性封装、继承、多态

万事万物皆为对象，对象有属性和行为

具有相同性质的对象可以抽象为类

定义一个类
class{
    // 属性

    // 行为
};

4.1 封装
4.1.1 封装的意义

将属性和行为作为一个整体，表现生活中的事物
将属性和行为加以权限控制

属性和行为统一称为成员
属性：成员属性 成员变量
行为：成员函数 成员方法

把属性和行为放在不同权限下
    public    公共   成员 类内可以访问 类外可以访问
    protected 保护   成员 类内可以访问 类外不可以访问 继承时子类可以访问
    private   私有   成员 类内可以访问 类外不可以访问 继承时子类不能访问
class 默认权限为私有
struct 默认权限为公共

成员属性设置为私有
    优点 1、可以自己控制读写权限 2、对于写权限，可以检测数据的有效性

*/

#include <iostream>
using namespace std;

const float pi = 3.14;

// 定义一个类
class Circle
{
    // 公共权限
public:
    // 属性
    int m_r;

    // 行为
    double cal_ZC()
    {
        return 2 * pi * m_r;
    }
};

class student
{
public:
    string name; // 姓名
    string id;

    void show_mes()
    {
        cout << "名字是" << name << endl;
        cout << "学号是" << id << endl;
    }
};

class Preson
{
    // 公共
public:
    string name;

    // 保护
protected:
    string car;
    // 私有
private:
    int password;

public:
    void func()
    {
        name = "zhangsan";
        car = "tuolaji";
        password = 123456;
    }
};

class per
{
private:
    // 可读可写
    string m_name;
    // 可读
    int m_age;
    // 可写
    string m_lover;

public:
    void set_name(string name)
    {
        m_name = name;
    }
    string get_name()
    {
        return m_name;
    }

    // 年龄可读可写 设置范围必须为0-150
    void set_age(int age)
    {
        if (age < 0 || age > 150) {
            cout << "错误年龄" << endl;
            m_age = 0;
            return;
        }

        m_age = age;
    }
    int get_age()
    {
        return m_age;
    }

    void set_lover(string lover)
    {
        m_lover = lover;
    }
};

int main()
{
    // 创建一个对象
    Circle c1;
    c1.m_r = 10;
    cout << c1.cal_ZC() << endl;

    student s1;
    s1.name = "ian";
    s1.id = "131418";
    s1.show_mes();

    Preson p1;
    p1.name = "dfsdf";

    per pp1;
    pp1.set_name("sdsd");
    cout << pp1.get_name() << endl;

    pp1.set_lover("sdasd");
    pp1.set_age(1222);
    cout << pp1.get_age() << endl;



    return 0;
}
