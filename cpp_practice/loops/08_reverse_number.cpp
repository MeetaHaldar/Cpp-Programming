#include <iostream>
using namespace std;
int main()
{

    int a, m = 0;
    cout << "enter your number = ";
    cin >> a;
    while (a > 0)
    {
        m = a % 10;
        cout << m;
        a = a / 10;
    }
}