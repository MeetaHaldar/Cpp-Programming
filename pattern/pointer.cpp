#include <iostream>
using namespace std;
int main()
{
    // dereference
    // obtain the address of a data item held in another location from (a pointer).

    /* The dereference operator or indirection operator,
     sometimes denoted by "*", is a unary operator found 
     in C-like languages that include pointer variables.
      It operates on a pointer variable, and returns 
      an l-value equivalent to the value at the pointer address.
       This is called "dereferencing" the pointer */
       
    int a = 10;
    int *p = &a;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;

    int **d = &p;
    cout << "d = " << d << endl;
    cout << "*d = " << *d << endl;
    cout << "**d = " << **d << endl;

    int ***e = &d;
    cout << "e = " << e << endl;
    cout << "*e = " << *e << endl;
    cout << "**e = " << **e << endl;
    
    return 0;
}