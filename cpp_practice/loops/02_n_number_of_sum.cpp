#include <iostream>
using namespace std;
int main(void){
    int n;
    int sum=0;
    cout<<"enter the number till u want sum = ";
    cin >> n;
    cout<<"your numbers are = ";
    for(int i=1; i<=n;i++)
    {
        cout<<i<<endl;
        sum+=i;
        
    }
    cout<<"the sum of"<<n<<"numbers is ="<<sum;
    
}
