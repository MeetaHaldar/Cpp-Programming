#include <iostream>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cout << "enter your number = ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count > 2)
        cout << "the number is not prime";
    else
        cout << "number is prime";
}