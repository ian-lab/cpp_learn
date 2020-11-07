/*
函数形参列表可以设置默认参数
void fun(int a, int b = 10, int c = 20){}
有默认参数的形参要放在最后

如果函数的声明中有默认参数，函数实现中就不能有默认参数

函数占位参数
只写数据类型，调用函数时也需要传值，占位参数可以有默认参数，就不再需要传值
void fun( int a, int = 10 ){}


****函数重载****
函数名可以相同，提高复用性

函数重载满足条件
    同一个作用域下
    函数名称相同
    参数 类型不同 或者 个数不同 或者 顺序不同

返回值不同 不能作为函数重载的条件

void func(){}
void func(int a){}
void func(double a){}
void func(int a, double a){}
void func(double a, int a){}

func();     // 调用第一个函数
func(10);   // 调用第二个函数
func(3.14); // 调用第三个函数
func(10, 3.14); // 调用第四个函数
func(3.14, 10); // 调用第五个函数

函数重载注意事项

1、引用作为重载条件

void func(int &a){}
void func(const int &a){} // const int &a = 10; -> int temp; int &a = temp; 合法

int a;
func(a);    // 调用第一个函数
func(10);   // 调用第二个函数

2、函数重载碰到函数默认参数

void func(int a, int b = 10){}
void func(int a){}
func(10); // 既可以调第一个，也能调第二个，出现二义性

尽量避免这种情况，有重载就不加默认参数
*/