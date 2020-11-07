#include <iostream>
#include <string>
#include<time.h>
#include<math.h>
using namespace std;
 
#define week 7
int adder(int a, int b);
int main()
{
   // float f = 2.1234567890f;
   // cout << f << endl;
   // double d = 2.1234567890;
   // cout << f << endl;
   // char ch = 'a';
   // cout << "asa" << int(ch) << endl;
   // const int a = 12;
   // cout << "一周有" << week << "天" << endl;
   // cout << week << endl;
   // cout << "Hello World" << endl; // 输出 Hello World
   // cout << "你好" << endl;
   // cout << "int占用内存空间为：" << sizeof(int) << endl;

   // char str[] = "hello world";
   // cout << str << endl;
   // string str2 = "helll";
   // cout << str2 << endl; 

   // bool flag = true;

   // cout << flag << endl;

   // int a = 1;
   // cout << a << endl;
   // cout << "赋值:";
   // cin >> a;
   // cout << a << endl;

   // int a = 10;
   // int b = 3;

   // cout << a + b++  << endl;
   // cout << a - b << endl;
   // cout << a * b << endl;
   // cout << a / b << endl;
   // cout << a % b << endl;
   // cout << (a & b) << endl;

   // int score = 0;

   // cout << "please input your score:";
   // cin >> score;
   // cout << "your score is " << score << endl;
  
   // if (score >= 90)
   // {
      
   //    if (score == 100)
   //    {
   //       cout << "A++" << endl;
   //    }
   //    else if (score >= 95)
   //    {
   //       cout << "A+" << endl;
   //    }
   //    else
   //    {
   //       cout << "A" << endl;
   //    }
      
   // }
   // else if(score >= 60)
   // {
   //    cout << "D" << endl;
   // }
   // else 
   // {
   //    cout << "not pass" << endl;
   // }

   // int weight_pig_1 = 0, 
   //     weight_pig_2 = 0, 
   //     weight_pig_3 = 0;
   // int max_weight = 0;
   // int flag = 0;
   // cout << "请输入3只小猪的体重" << endl;

   // cin >> weight_pig_1 >> weight_pig_2 >> weight_pig_3;

   // cout << "第1只小猪体重为" << weight_pig_1 << endl;
   // cout << "第2只小猪体重为" << weight_pig_2 << endl;
   // cout << "第3只小猪体重为" << weight_pig_3 << endl;

   // if (weight_pig_1 > weight_pig_2)
   // {
   //    max_weight = weight_pig_1;
   //    flag = 1;
   // }
   // else
   // {
   //    max_weight = weight_pig_2;
   //    flag = 2;      
   // }
   // if (weight_pig_3 > max_weight)
   // {
   //    max_weight = weight_pig_3;
   //    flag = 3;
   // }
   // cout << "第" << flag << "只小猪最重，体重为" << max_weight << endl; 
   
   // float a= 3 ,b = 5;

   // cout << (a > b ? a : b) << endl;
   // printf("%.4f", a);

   // int score = 0;
   // cout << "input score:"<< endl;
   // cin >> score ;
   // switch (score)
   // {
   // case 10: cout << "ss1"  << endl; break;
   // case  9: cout << "ss2"  << endl; break;
   // case  8: cout << "ss3"  << endl; break;
   // case  7: cout << "ss4"  << endl; break;
   // case  6: cout << "ss5"  << endl; break;
   // case  5: cout << "ss6"  << endl; break;
   // case  4: cout << "ss7"  << endl; break;
   // case  3: cout << "ss8"  << endl; break;
   // case  2: cout << "ss9"  << endl; break;
   // case  1: cout << "ss10" << endl; break;   
   // default:break;
   // }
   // int num = 0;
   // while (num < 10000)
   // {
   //    cout << num << endl;
   //    num++;
   // }



   // int i = 0;
   // int num = 0;        //随机数
   // int num_guess = 0;  //猜的数
   // int num_chance = 10;//猜测次数
   // srand(time(0) + rand());
   // num = rand() % 100 + 1;

   // cout << num << endl;

   // while (1)
   // {
   //    cout << "输入数字：";
   //    cin >> num_guess;
   //    if (num_guess == num)
   //    {
   //       cout << "对了" << endl;
   //       break;
   //    }
   //    else if (num_guess > num)
   //    {
   //       cout << "大了" << endl;
   //    }
   //    else
   //    {
   //       cout << "小了" << endl;
   //    }
   //    // 猜测次数控制
   //    i++;
   //    if (i == num_chance)
   //    {
   //       cout << "失败" << endl;
   //       break;
   //    }
   //    else
   //       cout << "你还有" << (num_chance-i) << "次机会" << endl; 
   // }
   

   // int num = 0;
   // do
   // {
   //    cout << num << endl;
   //    num++;
   // } while (num < 10);
   
   // int num = 100;

   // do
   // {
   //    if (pow((num / 100),3) + pow((num % 100 / 10),3) + pow((num % 10),3) == num)
   //    {
   //       cout <<  num << endl;
   //    }
   //    num++;
   // } while (num < 1000);
   
   // for (int i = 1; i < 101; i++)
   // {
   //    if ( ((i % 10)==7) || ((i / 10)==7) || ((i % 7)==0) )
   //       cout << "拍桌子" << endl;
   //    else
   //       cout << i << endl;
   // }

   // for (int i = 0; i < 10; i++)
   // {
   //    for (int j = 0; j < 10; j++)
   //       cout << "* ";
   //    cout << endl;
   // }

   // for (int i = 1; i < 10; i++)
   // {
   //    for (int j = 1; j <= i; j++)
   //       cout << j << "*" << i << "=" << (i*j) << " ";
   //    cout << endl;
   // }

   // int score[10] = {} ;
   
   // // for (int i = 0; i < 10; i++)
   // // {
   // //    score[i] = i;
   // // }
   //    for (int i = 0; i < 20; i++)
   // {
   //    cout << score[i] << endl;
   // }
  
   // cout << &score[1] << endl;

   // int weight[5] = {300, 350, 200, 400, 250};
   // int temp = 0, max_weight = 0;

   // for (int i = 0; i < 5; i++)
   // {
   //    if (weight[i] > max_weight)
   //    {
   //       max_weight = weight[i];
   //       temp = i + 1;
   //    }
   // }
   // cout << temp << "只小猪最重，重量为" << max_weight << endl;

   // 数组逆置
   // int arr[8] = {1, 2, 3, 4, 5, 6, 5, 6};
   
   // int num_arr = sizeof(arr)/sizeof(arr[0]); // 判断原数组中的元素个数

   // int arr1[num_arr] = {};                   // 逆置后的数组
   
   // for (int i = 0; i < num_arr; i++)         // 数组逆置
   // {
   //    arr1[i] = arr[num_arr - i - 1];
   // }

   // for (int i = 0; i < num_arr; i++)         // 输出原数组
   // {
   //    cout << arr[i] << ' ';
   // }
   // cout << endl;
   // for (int i = 0; i < num_arr; i++)         // 输出逆置后的数组
   // {
   //    cout << arr1[i] << ' ';
   // }

   // int arr[6] = {1, 2, 3, 4, 5, 6};
   // int temp = 0;
   // int start = 0;
   // int end = sizeof(arr) / sizeof(arr[0]) - 1;

   // while (start < end)
   // {
   //    temp = arr[start];
   //    arr[start] = arr[end];
   //    arr[end] = temp;
   //    start++;
   //    end--;
   // }
   // for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)         // 输出逆置后的数组
   // {
   //    cout << arr[i] << ' ';
   // }

   // // 冒泡排序
   // int arr[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
   // int term;
   // for (int i = 0; i < 9; i++)         
   // {
   //    cout << arr[i] << ' ';
   // }
   // cout << endl;

   // for (int j = 0; j < 8; j++)
   // {
   //    for (int i = 0; i < 8-j; i++)
   //    {
   //       cout << i << endl;
   //       if (arr[i] > arr[i+1])
   //       {  
   //          term = arr[i];
   //          arr[i] = arr[i+1];
   //          arr[i+1] = term;
   //          for (int k = 0; k < 9; k++)         
   //          {
   //             cout << arr[k] << ' ';
   //          }
   //          cout << endl;
   //       }
   //    } 
   // }
   // for (int i = 0; i < 9; i++)         
   // {
   //    cout << arr[i] << ' ';
   // }
   
   // 二维数组
   // int arr[2][3] = {{1, 2, 3},{4, 5, 6}};
   // for (int i = 0; i < 2; i++)         
   // {
   //    for (int j = 0; j < 3; j++) 
   //       cout << arr[i][j] << ' ';
   // }

   // 求每个人成绩总和
   // int arr[3][3] = {{100, 100, 100},
   //                  {90,   50, 100}, 
   //                  {60,   70,  80}};
   
   // int score[3] = {0};
   // for (int i = 0; i < 3; i++)
   // {
   //    for (int j = 0; j < 3; j++)
   //    {
   //       score[i] += arr[i][j];
   //    }
   //    cout << score[i] << endl;
   // }
   

   cout << adder(1, 2) << endl;

   // system("pause");
   return 0;
}

int adder(int a, int b)
{
   int c = 0;
   return c = a + b;
}


