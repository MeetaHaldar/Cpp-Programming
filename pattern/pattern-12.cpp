//     *
//    * *
//   * * *
//  * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < 2 * n; row++)
    {
 if (row <= n)
        {for (int col = 0; col < n-row; col++)
            {
                cout << " ";
            }
        
        }

        else
        {
            for (int col = 1; col <= n-((2 * n) - row); col++)
            {
                cout << " ";
            }

            
        }

        if (row <= n)
        {for (int col = 0; col < row; col++)
            {
                cout << "* ";
            }
            cout << endl;
        }

        else
        {
            for (int col = 1; col <= ((2 * n) - row); col++)
            {
                cout << "* ";
            }

            cout << endl;
        }
    }
}