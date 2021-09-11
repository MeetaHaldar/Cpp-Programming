#include <iostream>
using namespace std;
void fun(int x[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << "your elements are = " << x[i] << endl;
    }
}
void fun1(int *x, int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << "your elements are = " << x[i] << endl;
    }
}
void fun2(int *x, int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << "your elements are = " << *(x + i) << endl;
    }
}

int main()
{

    int a[3] = {1, 2, 3};

    fun2(a, 3);

    // int n;
    // cout << "enter number of elements";
    // cin >> n;

    // int a[n];

    return 0;
}