// * * * * *
// * * * *
// * * *
// * *
// *
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // method 1
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (j <= (n - i))
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }


// method 2
    for(int row=0; row<n;row++)
    {
        for(int col=row; col<n;col++)
        {
cout<<"* ";
        }
        cout<<endl;
    }
}