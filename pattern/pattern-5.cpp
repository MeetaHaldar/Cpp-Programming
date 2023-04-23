// A
// BC
// DEF
// GHIJ
// KLMNO
// PQRSTU
// VWXYZ[\

#include <iostream>
using namespace std;

int main()
{
    int n;
    char a = '@';
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            a++;
            // char b = a;
            cout << a;
        }
        cout << endl;
    }
}