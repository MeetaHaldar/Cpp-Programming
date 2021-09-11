#include <iostream>
using namespace std;
int main()
{
    int n;
    int product = 1;
    cout << "enter your number = ";
    cin >> n;
    for (int i = 1; i <= n; i++)

    {
        product *= i;
    }
    cout << "the factorial of the " << n << " is = " << product;
}