#include <iostream>
#include <string>

using namespace std;

void maopao(int *p, int len);

int main()
{
  
    int arr[5] = {0, 4, 1, 2, 3};
    int *p = arr;
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < 5; i++)
    {
        cout << *(p++) << " ";
    }
    cout << endl;

    maopao(arr, len);
    
    p = arr;
    for (int i = 0; i < 5; i++)
    {
        cout << *(p++) << "  ";
    }
    cout << endl;

    system("pause");
    return 0;
}

void maopao(int *p, int len)
{
    int temp;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len-1; j++)
        {
            if (p[j] > p[j+1])
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp; 
            }    
        }
    }   
}
                                 
