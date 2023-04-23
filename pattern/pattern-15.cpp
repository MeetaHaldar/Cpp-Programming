#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<=(2*n);row++)
    {

        for(int col=0;col<=(2*n);col++)
        {
            int atEveryIndex= ((2*n))-(min(min(row,col),min(n-row, n-col)));
            cout<<atEveryIndex<<" ";
        }
        cout<<endl;
    }
}