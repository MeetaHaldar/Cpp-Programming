
//         1 
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5
//   4 3 2 1 2 3 4 
//     3 2 1 2 3
//       2 1 2
//         1
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=1;row<=(2*n)-1;row++ )
    {
int colLimit=row>n?2*n-row:row;
int spacelimit = row>n? (row-n):(n-row);
        for(int space=0; space<spacelimit;space++)
        {
            cout<<"  ";
        }

      for(int col=colLimit; col>=1;col-- )
        {
            cout<<col<<" ";
        }
        for(int col=2; col<=colLimit;col++ )
        {
            cout<<col<<" ";
        }
        cout<<endl;

    }
}
