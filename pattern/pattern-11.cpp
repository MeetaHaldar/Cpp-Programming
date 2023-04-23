// *
// * *
// * * *
// * * * *
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
    for (int row = 0; row < 2 * n; row++)
    {
int colLimit=row<=n?row:(2 * n) - row;
        
       for (int col = 0; col < colLimit; col++)
            {
                cout << "* ";
            }
            cout << endl;
        

       
    }
}