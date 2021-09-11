#include <iostream>
using namespace std;
int main()          
{
    int a;
    cout << "enter your year = ";
    cin >> a;

    if (a % 4 == 0 || a % 100 == 0 || a % 400 == 0)
    {
        cout << "the " << a << " is a leap year.";
    }
    else
    {
        cout << "the " << a << "is not a leap year.";
    }
    return 0;
}