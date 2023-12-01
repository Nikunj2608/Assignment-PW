#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the 1st marks : ";
    cin >> a;
    cout << "Enter the 2nd marks : ";
    cin >> b;
    cout << "Enter the 3rd marks : ";
    cin >> c;
    if (c < b && c < a)
    {
        cout << c << " is the lowest marks";
    }
    else if (b < c && b < a)
    {

        cout << b << " is the lowest marks";
    }
    else
    {
        cout << a << " is the lowest marks";
    }
}