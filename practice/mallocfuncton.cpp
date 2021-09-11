#include <iostream>
using namespace std;
int main()
{
  int *u, n;

  cout << "enter your total elements number = ";
  cin >> n;
  u = new int[n];

  for (int i = 0; i < n; i++)
  {
    cout << "enter your element = ";
    cin >> u[i];
  }
  cout << "your enter no. is " << endl ;
  for (int i = 0; i < n; i++)
  {
    cout
        << "u[" << i << "] =" << u[i] << endl;
  }
  return 0;
}