/*
创建一个圆类和一个点类
判断点和圆的关系

*/
#include <iostream>
#include <math.h>
using namespace std;

// 点类
class point
{
private:
    int m_x;
    int m_y;

public:
    // 设置点的位置
    void set_x_y(int x, int y)
    {
        m_x = x;
        m_y = y;
    }
    // 获取点的位置
    int get_x()
    {
        return m_x;
    }
    int get_y()
    {
        return m_y;
    }
};
// 圆类
class circle
{
private:
    point m_center;
    int m_r;

public:
    // 设置圆心
    void set_center(point p)
    {
        m_center = p;
    }
    // 设置半径
    void set_r(int r)
    {
        m_r = r;
    }
    // 获取圆心坐标
    point get_center()
    {
        return m_center;
    }
    // 获取半径
    int get_r()
    {
        return m_r;
    } 
};



int main()
{
    circle c1;
    point circle_center;
    circle_center.set_x_y(0, 0);
    c1.set_center(circle_center);
    c1.set_r(5);
    
    point p1;
    p1.set_x_y(0, 4);

    int datance = (c1.get_center().get_x() - p1.get_x()) * (c1.get_center().get_x() - p1.get_x()) + (c1.get_center().get_y() - p1.get_y()) * (c1.get_center().get_y() - p1.get_y());

    int rdatance = c1.get_r() * c1.get_r();

    if (datance < rdatance)
    {
        cout << "点在圆内" << endl;
    }
    else if (datance > rdatance)
    {
        cout << "点在圆外" << endl;
    }
    else if (datance == rdatance)
    {
        cout << "点在圆上" << endl;
    }
    else
        cout << "something is wrong" << endl;

    return 0;
}
