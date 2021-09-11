#include <iostream>
using namespace std;
int main()
{
    int *m, n;

    cout << "enter your total number =  ";
    cin >> n;

    m = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "enter your element = ";
        cin >> m[i];
    }
    cout << "your entered elements are = " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << " m[" << i << "] = " << *(m + i) << endl;
    }
    return 0;
}