#include <iostream>
// #include <string>

using namespace std;

int main()
{ 
    // 定义结构体变量
    struct student
    {
        // 成员列表
        string name;
        int age;
        int grade;
    };

    student s1;
    s1.age = 12;
    s1.grade = 34;
    s1.name = "lim";
    cout << s1.name << endl;

    student s2 = {"ll", 23, 12};
    cout << s2.name << endl;

    // 结构体数组 将自定义的结构体放入到数组中
    student stu_arr[3] = 
    {
        {"l1", 23, 12},
        {"l2", 23, 12},
        {"l3", 23, 12}
    };
    stu_arr[2].name = "33";
    cout << stu_arr[2].name << endl;

    // 结构体指针 通过->访问成员
    student *p = &s1;
    cout << p->name << endl;

    // 结构体嵌套结构体
    struct teacher
    {
        int id;
        string name;
        int age;
        student s1;
    };

    teacher t1;
    t1 = {12, "w", 23, {"l1", 23, 12}};
    cout << t1.s1.name;


    // system("pause");
    return 0;
}