#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    int a;
    cout << "enter number = ";
    cin >> a;
    for (int i = a; i > 0; --i)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count <= 2)
        {
            cout << i << endl;
            break;
        }
        count = 0;
    }
}