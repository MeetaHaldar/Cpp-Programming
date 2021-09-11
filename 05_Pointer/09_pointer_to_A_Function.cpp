#include <iostream>
using namespace std;

int max(int x, int y)
{
    return x > y ? x : y;
}
int min(int x, int y)
{
    return x < y ? x : y;
}

int main()

{
    int (*p)(int, int);
    p = max;
    (*p)(10, 6);

    p = min;
    (*p)(10, 6);

    return 0;
}
