#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the first integer : ";
    cin >> a;
    cout << "Enter the second integer : ";
    cin >> b;
    if (a > b)
    {
        cout << a;
    }
    else if (b > a)
    {
        cout << b;
    }
    else
    {
        cout << "Both are equal";
    }
}