//         *
//       * *
//     * * *
//   * * * *
// * * * * *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // methhod 1
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (j <= (n - i))
    //         {
    //             cout << "  ";
    //         }
    //         else
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     cout << endl;
    // }


    // method 2

    for(int row =0; row<n;row++)
    {
        for(int space=0;space<n-row ; space++ )
        {
            cout<<"  ";
        }
        for(int col=0;col<=row;col++ )
        {
cout<<"* ";
        }
        cout<<endl;
    }
}