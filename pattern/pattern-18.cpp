
// * * * * * 
//  * * * *
//   * * *
//    * *
//     *

//     *
//    * *
//   * * *
//  * * * *
// * * * * * 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<=2*n;row++)
    {
        int spaceLimit=row>n?((2 * n) - row):row;
        int colLimit=row>n?row-n:n-row ;
        for(int space=0;space<spaceLimit;space++)
        {
            cout<<" ";
        }
        for(int col=1;col<=colLimit;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}