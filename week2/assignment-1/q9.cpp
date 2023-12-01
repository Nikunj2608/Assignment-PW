#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the character : ";
    cin >> ch;
    int x = (int)ch;
    if (x >= 97 && x <= 122)
    {
        cout << "Small alphabet ";
    }
    else if (x >= 65 && x <= 90)
    {
        cout << "Capital Alphabet ";
    }
    else if (x >= 45 && x <= 57)
    {
        cout << "Digit";
    }
    else
        cout << "Special character ";
}