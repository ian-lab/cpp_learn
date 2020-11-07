#include <iostream>

using namespace std;

struct hero
{
    string name;
    int age;
    string sex;
};

int main()
{
    hero hero_arr[5] = {
        {"刘备", 23, "男"},
        {"关羽", 22, "男"},
        {"张飞", 20, "男"},
        {"赵云", 21, "男"},
        {"貂蝉", 19, "女"},
    };
    hero temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (hero_arr[j].age > hero_arr[j + 1].age)
            {
                temp = hero_arr[j];
                hero_arr[j] = hero_arr[j + 1];
                hero_arr[j + 1] = temp;
            }    
        }
    }
        for (int i = 0; i < 5; i++)
    {
        cout << hero_arr[i].name << " " << hero_arr[i].age << " " << hero_arr[i].sex << endl;
    }

    return 0;
}