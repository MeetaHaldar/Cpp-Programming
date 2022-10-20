#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the total number of element = ";
    cin >> n;
    int a[n];
    cout << "the size of your array is = " << sizeof a; // 4 bytes each
    return 0;
    // here, no choice or syntax is available for changing the size of aray again that's why
    // we use pointer.
    // also this array created in stack memory.
}