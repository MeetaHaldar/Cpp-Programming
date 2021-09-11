#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "enter your character or alphabet = ";
    cin >> c;

    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        cout << "it is a vowel";
    }

    else
    {
        cout << "it is a consonant";
    }
    return 0;
}