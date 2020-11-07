#include <iostream>
// #include <string>

using namespace std;


// 结构体作为参数向函数中传递

// 定义结构体变量
struct student
{
    // 成员列表
    string name;
    int age;
    int grade;
};

void print_studen(const student * stu);

int main()
{ 

    student s1;
    s1.age = 12;
    s1.grade = 34;
    s1.name = "lim";
    print_studen(&s1);

    system("pause");
    return 0;
}  

// 打印函数
void print_studen(const student *stu)// 加const后函数内部不能修改结构体的值，防止误操作
{
  
    cout << stu->name << endl;
}
