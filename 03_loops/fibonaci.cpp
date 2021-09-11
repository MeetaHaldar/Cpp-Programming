#include <iostream>
using namespace std;
int main()
{
    int n, next = 0, k = 0, m = 1;
    cout << "enter the no. till u want the fibonaci = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << k << endl;
            continue;
        }
        if (i == 2)
        {

            cout << m << endl;
            continue;
        }
        // if (n > 2)
        // {
        //     cout << k << endl;
        //     cout << m << endl;
        //     break;
        // }
        next = k + m;

        k = m;
        m = next;

             cout << next << endl;
    }

    return 0;
}