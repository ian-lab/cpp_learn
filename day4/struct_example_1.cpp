#include <iostream>
// #include <string>

using namespace std;

// 学生结构体
struct student
{
    // 成员列表
    string name;
    int score;
};
// 老师结构体
struct teacher
{
    string name;
    student stu_arr[5];
};

void assign(teacher *tea);
void print_teacher_arry(const teacher *tea);

int main()
{
    teacher teacher_arr[3];

    assign(teacher_arr);
    print_teacher_arry(teacher_arr);
    
    // system("pause");
    return 0;
}

void assign(teacher *tea)
{
    for (int j = 0; j < 3; j++)
    {
        cout << "输入第" << j + 1 << "个老师姓名：";
        cin >> tea[j].name;
        for (int i = 0; i < 5; i++)
        {
            cout << "输入第" << j + 1 << "个老师的"<< "第" << i + 1 << "个学生姓名：";
            cin >> tea[j].stu_arr[i].name;
            cout << "输入第" << i + 1 << "个学生成绩：";
            cin >> tea[j].stu_arr[i].score;
        }
    }
}

void print_teacher_arry(const teacher *tea)
{
    for (int j = 0; j < 3; j++)
    {
        cout << "第" << j + 1 << "个老师姓名：" << tea[j].name << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "第" << j + 1 << "个老师的"<< "第" << i + 1 << "个学生的姓名为："
                 << tea[j].stu_arr[i].name<< " " <<"成绩为：" << tea[j].stu_arr[i].score;
            cout << endl;
        }
    }
}