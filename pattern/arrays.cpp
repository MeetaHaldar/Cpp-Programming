#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of elements of your array = ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min = a[0] , max=a[0];
    for (int i = 0; i < n; i++)
    {
        if (max <= a[i])
        {
            max = a[i];
        }
        else if (min >= a[i])
        {
            min = a[i];
        }
    }
    cout << "your max is = " << max << endl;
    cout << "your min is = " << min << endl;
cout<<"your resversed array is = ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    return 0;
}