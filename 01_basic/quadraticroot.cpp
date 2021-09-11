#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c, d;
    cout << "enter your value for a= ";
    cin >> a;
    cout << "enter your value for b= ";
    cin >> b;
    cout << "enter your value for c = ";
    cin >> c;
    d = (b * b) - (4 * a * c);
    if (d = 0)
    {
        cout << "roots are real and equal " << endl
             << "root = " << (-b / (2 * a));
    }
    else if (d < 0)
    {
        cout << "roots cant find as discriminant is imaginary";
    }
    else
    {
        cout << " the roots are real and different " << endl
             << "r1 =" << ((-b) + (sqrt(d))) / (2 * a) << endl
             << "r2 = " << ((-b) - (sqrt(d))) / (2 * a);
    }
    return 0;
}