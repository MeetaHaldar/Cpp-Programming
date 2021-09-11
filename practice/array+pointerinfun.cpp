#include <iostream>
using namespace std;
void fun(int n)
{
    int *p;
    p = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element = ";
        cin >> p[i];
    }
    cout << "your elements are " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "p[" << i << "] =" << *(p + i) << endl;
    }
}
int main()
{
    int n;
    cout << "enter the no. of element = ";
    cin >> n;
    fun(n);
    return 0;
}