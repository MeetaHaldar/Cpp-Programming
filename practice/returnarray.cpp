#include <iostream>
using namespace std;
int *fun(int n)
{
    int *k;
    k = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter your element = " << endl;
        cin >> k[i];
    }

    return (k);
}
int main()
{
    int n, *result;
    cout << "enter the total element number = ";
    cin >> n;
    result = fun(n);
    for (int i = 0; i < n; i++)
    {
        cout << " your element is  = "<<*(result+i)<< endl;
        }

    cout << "done";
    return 0;
}