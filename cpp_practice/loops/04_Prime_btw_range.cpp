#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int count = 0;
    cout << "enter the lower range = ";
    cin >> a;
    cout << "enter the higher range = ";
    cin >> b;
    for (int i = a; i <= b; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count <= 2)
            cout << i << endl;
        count = 0;
    }
}