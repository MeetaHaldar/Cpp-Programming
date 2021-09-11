#include <iostream>
using namespace std;
int main()
{
    int a;
    int n;
    int sum = 0;
    cout << "enter your number = ";
    cin >> a;
    while (a != 0)
    {
        sum += a % 10;

        a = a / 10;
    }

    cout << sum;
}