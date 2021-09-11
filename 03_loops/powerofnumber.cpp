#include <iostream>
using namespace std;
int main()
{
    int a, n, p = 1;
    cout << "enter your number =";
    cin >> a;
    cout << "enter the power = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        p *= a;
    }
    cout << p;
    return 0;
}