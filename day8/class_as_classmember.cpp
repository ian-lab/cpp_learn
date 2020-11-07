/*

类对象作为类成员
    c++类中的成员可以是另一个类的对象

当其他类对象作为本类成员，构造时先构造类对象，在构造自身
析构的顺序与构造相反


*/

#include <iostream>
#include <string>
using namespace std;

class phone
{
public:
	string m_pname;
	phone(string pname)
	{
		m_pname = pname;
	}
	~phone() {}
};

class person
{
public:
	string m_name;
	phone m_phone;
	person(string name, string pname) : m_name(name), m_phone(pname)
	{
	}
	~person() {}
	// ~person();
};

void test()
{
	person p("zhangsan", "iphone 12");
	cout << p.m_name << p.m_phone.m_pname << endl;
}

int main(int argc, char const *argv[])
{

	test();

	return 0;
}