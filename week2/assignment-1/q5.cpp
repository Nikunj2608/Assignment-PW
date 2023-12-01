#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the first side of the triangle : ";
    cin >> a;
    cout << "Enter the second side of the triangle : ";
    cin >> b;
    cout << "Enter the third side of the triangle : ";
    cin >> c;
    if (a == b && b == c && c == a)
    {
        cout << "It is a equilateral triangle";
    }
    else if (a == b || b == c || c == a)
    {
        cout << "It is a isosceles triangle ";
    }
    else
    {
        cout << "It is a scalene triangle";
    }
}