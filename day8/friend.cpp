/*
友元

全局函数做友元
类做友元
成员函数做友元
*/
#include <iostream>
using namespace std;
class building;
// 类做友元
class good_gay
{
public:
    building *m_Building{}; // 需要加{}

    void visit(); //访问building中的属性
    good_gay();
};

class building
{
    // 全局函数做友元
    friend void good_gay_test(building *building);
    // 类做友元
    friend class good_gay;

public:
    string m_SittingRoom;
    building();

private:
    string m_bed_room;
};
// 类外成员函数
building::building()
{
    m_SittingRoom = "客厅";
    m_bed_room = "卧室";
}

good_gay::good_gay()
{
    m_Building = new building;
}
void good_gay::visit()
{
    cout << m_Building->m_SittingRoom << endl;
    cout << m_Building->m_bed_room << endl;
}

// 全局函数做友元
void good_gay_test(building *building)
{
    cout << building->m_SittingRoom << endl;
    cout << building->m_bed_room << endl;
}

void test01()
{
    building b1;
    good_gay_test(&b1);
}

int main()
{
    // 全局函数做友元
    // test01();

    // 类做友元
    good_gay g1;
    g1.visit();
}
