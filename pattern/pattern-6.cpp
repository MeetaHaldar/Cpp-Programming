// A
// B B
// C C C
// D D D D
// E E E E E
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a = '@';
    for (int i = 1; i <= n; i++)
    {
        a++;

        for (int j = 1; j <= i; j++)
        {

            cout << a;
        }
        cout << endl;
    }
}