#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter your number = ";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "your number is an even number.";
    }
    else
    {
        cout << " it is odd number";
    }
    return 0;
}