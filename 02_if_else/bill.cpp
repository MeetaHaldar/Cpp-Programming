#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, bill, dis;
    cout << "enter your total bill so that we can make you discount = ";
    cin >> a;
    if (a <= 100)
    {
        bill = a;
        dis = 0;
        cout << "As your Total bill is less than or equal to'100' so there will be no discount " << endl
             << "so your Total Bill is = " << bill;
    }
    else if (a > 100 && a < 500)
    {
        dis = (a / 10);
        bill = ((a)-dis);
        cout << "your discount is = " << dis << endl;
        cout << "CONGRATS!! your Total bill is = " << bill;
    }
    else if (a >= 500)
    {
        dis = (a / 5);
        bill = ((a)-dis);
        cout << "your discount is = " << dis << endl;
        cout << "CONGRATS!! your Total bill is = " << bill;
    }
    return 0;
}