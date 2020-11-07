/*
创建一个立方体的类
计算长方体面积和体积
判断两个长方体是否相同
*/
#include <iostream>
using namespace std;

class cube
{
private:
    int m_h;
    int m_l;
    int m_w;

public:
    // 设置长宽高
    void set_l_w_h(int l, int w, int h)
    {
        m_l = l;
        m_w = w;
        m_h = h;
    }
    // 计算面积
    int get_area()
    {
        return 2 * (m_h * m_l + m_h * m_w + m_l * m_w);
    }
    // 计算体积
    int get_volume()
    {
        return m_h * m_w * m_l;
    }
    // 比较两个立方体是否相等
    int m_cube_compare(cube &c)
    {
        if (get_area() == c.get_area() && get_volume() == c.get_volume())
        {
            return true;
        }
        else
            return false;
    }
};

bool cube_compare(cube &c1, cube &c2)
{
    if (c1.get_area() == c2.get_area() && c1.get_volume() == c2.get_volume())
    {
        return true;
    }
    else
        return false;
}

int main()
{
    cube c1;
    cube c2;
    c1.set_l_w_h(2, 3, 4);
    c2.set_l_w_h(2, 4, 5);

    cout << c1.get_area() << endl;
    cout << c1.get_volume() << endl;
    cout << c2.get_area() << endl;
    cout << c2.get_volume() << endl;

    cout << cube_compare(c1, c2) << endl;
    cout << c1.m_cube_compare(c2) << endl;


    return 0;
}
