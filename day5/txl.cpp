#include <iostream>
#include <fstream>
using namespace std;

// 通讯录管理系统
// 1.添加联系人
// 2.显示联系人
// 3.删除联系人
// 4.查找联系人
// 5.修改联系人
// 6.清空联系人
// 0.退出通讯录

// 联系人结构体
struct contact
{
    string name;  
    string sex;
    string age;
    string phone_number;
    string adderss;
};

const int contact_num = 1000; // 总联系人数量

contact contact_arr[contact_num] = {}; // 联系人数组

int wir_pointer = 0; // 通讯录中已存储联系人的数量

// 函数声明
void display_init();    // 显示基本信息
void add_person();      // 增加联系人
void display_person();  // 显示所有联系人
void del_person();      // 删除联系人
void find_person();     // 查找联系人
void change_person();   // 修改联系人
void clear_person();    // 清空联系人
void exit();            // 退出

// 主函数
int main()
{
    system("cls");

    int fun_sel = 0; // 功能选择 0-6
    // 功能列表
    string fun[] = {"0.退出通讯录", "1.添加联系人", "2.显示联系人", "3.删除联系人", 
                    "4.查找联系人", "5.修改联系人", "6.清空联系人"};

    int stop_flag = 0; // 退出通讯录标志位 

    while (1)
    { 
        display_init();

        // 输入要选择的功能
        cout << "请选择相应功能：";
        cin >> fun_sel;
        cout << "选择的功能为：" << fun[fun_sel] << endl <<endl;

        // 执行相应功能
        switch (fun_sel)
        {
            case 1: add_person(); break;        // 添加联系人
            case 2: display_person(); break;    // 显示联系人
            case 3: del_person(); break;        // 删除联系人
            case 4: find_person(); break;       // 查找联系人
            case 5: change_person(); break;     // 修改联系人
            case 6: clear_person(); break;      // 清空联系人
            case 0: stop_flag = 1; break;              // 退出
            default:
                cout << "输入错误,请重新输入" << endl;
                break;
        }

        if(stop_flag == 1)
            break;
        
        system("pause");
        system("cls");
    }
    return 0;
}

// 显示基本信息
void display_init()
{
    cout << "********************" << endl;
    cout << "*    简易通讯录    *"  << endl;
    cout << "********************" << endl;
    cout << "*   1.添加联系人   *"  << endl;
    cout << "*   2.显示联系人   *"  << endl;
    cout << "*   3.删除联系人   *"  << endl;
    cout << "*   4.查找联系人   *"  << endl;
    cout << "*   5.修改联系人   *"  << endl;
    cout << "*   6.清空联系人   *"  << endl;
    cout << "*   0.退出通讯录   *"  << endl;
    cout << "********************" << endl;
}

// 添加联系人
void add_person()
{
    if(wir_pointer < contact_num)
    {
        cout << "请输入联系人姓名: ";
        cin >> contact_arr[wir_pointer].name;
        cout << "请输入联系人性别: ";
        cin >> contact_arr[wir_pointer].sex;
        cout << "请输入联系人年龄: ";
        cin >> contact_arr[wir_pointer].age;
        cout << "请输入联系人电话: ";
        cin >> contact_arr[wir_pointer].phone_number;
        cout << "请输入联系人住址: ";
        cin >> contact_arr[wir_pointer].adderss;
        cout << endl;

        wir_pointer++;
    }
    else
    {
        cout << "通讯录已满" << endl << endl;
    }
}

// 显示所有联系人
void display_person()
{
    if(wir_pointer == 0)
        cout << "通讯录为空" << endl;

    for (int i = 0; i < wir_pointer; i++)
    {
        cout << "姓名: "   << contact_arr[i].name
             << "\t性别: " << contact_arr[i].sex
             << "\t年龄: " << contact_arr[i].age
             << "\t电话: " << contact_arr[i].phone_number
             << "\t住址: " << contact_arr[i].adderss << endl;
    }
    cout << endl;
}

// 删除联系人
void del_person()
{
    string find_name; // 要删除的联系人姓名
    int num; // 要删除的联系人的序号
    int find_flag = 0;// 1 找到并删除联系人 0 未找到联系人

    cout << "输入要删除的联系人：";
    cin >> find_name;

    for (int i = 0; i < wir_pointer; i++)
    {
        if (find_name == contact_arr[i].name )
        {
            contact_arr[i] = {};
            cout << "删除成功" << endl;
            num = i;
            find_flag = 1;
            break;
        }
    }
    if (find_flag == 0)
    {
        cout << "查无此人" << endl;
    }
    if (find_flag == 1)
    {
        for (int i = num; i < wir_pointer - 1; i++)
        {
            contact_arr[i] = contact_arr[i + 1];
        }
        wir_pointer--;
        find_flag = 0;
    }
    cout << endl;
}

// 查找联系人
void find_person()
{
    string find_name;
    int find_flag = 0; //1 找到联系人 0 未找到联系人

    cout << "输入要查找的联系人：";
    cin >> find_name;

    for (int i = 0; i < wir_pointer; i++)
    {
        if (find_name == contact_arr[i].name )
        {
            cout << "姓名: "   << contact_arr[i].name
                 << "\t性别: " << contact_arr[i].sex
                 << "\t年龄: " << contact_arr[i].age
                 << "\t电话: " << contact_arr[i].phone_number
                 << "\t住址: " << contact_arr[i].adderss << endl;
            find_flag = 1;
            break; 
        }
    }
    if(find_flag == 0)
    {
        cout << "查无此人" << endl;
    }   
    find_flag = 0;
    cout << endl;
}

// 修改联系人
void change_person()
{
    string find_name;
    int sel_num; // 要修改项目的序号
    int find_flag = 0; //1 找到联系人 0 未找到联系人

    cout << "输入要修改的联系人：";
    cin >> find_name;

    for (int i = 0; i < wir_pointer; i++)
    {
        if (find_name == contact_arr[i].name )
        {
            find_flag = 1;
            cout << "输入要修改项目的序号" << endl
                 << "1-姓名" << endl
                 << "2-性别" << endl
                 << "3-年龄" << endl
                 << "4-电话号码" << endl
                 << "5-地址" << endl;
            cin >> sel_num;
            switch (sel_num)
            {
            case 1:
                cout << "输入修改后的姓名" << endl;
                cin >> contact_arr[i].name;
                break;
            case 2:
                cout << "输入修改后的性别" << endl;
                cin >> contact_arr[i].sex;
                break;
            case 3:
                cout << "输入修改后的年龄" << endl;
                cin >> contact_arr[i].age;
                break;
            case 4:
                cout << "输入修改后的电话号码" << endl;
                cin >> contact_arr[i].phone_number;
                break;
            case 5:
                cout << "输入修改后的地址" << endl;
                cin >> contact_arr[i].adderss;
                break;            
            default: break;
            }

            cout << "修改完成" << endl;
            break;
        }
    }
    if(find_flag == 0)
    {
        cout << "查无此人" << endl;
    }
    find_flag = 0;
    cout << endl;
}

// 清空联系人
void clear_person()
{
    for (int i = 0; i < wir_pointer; i++)
    {
        contact_arr[i] = {};
    }
    wir_pointer = 0;
    cout << "清空完成" << endl;
    cout << endl;
}
