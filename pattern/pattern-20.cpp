//        E
//        D E
//        C D E
//        B C D E
//        A B C D E
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {

        
       for (int col = n; col <=row; col++)
            {
                char a=int(64+col);
                cout <<a;
            }
            cout << endl;
        

       
    }
}