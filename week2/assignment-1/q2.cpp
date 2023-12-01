#include <iostream>
using namespace std;
int main()
{
    float r;
    cout << "Enter the radius of the circle : ";
    cin >> r;
    float pi = 3.14;
    float circumference = 2 * pi * r;
    float area = pi * r * r;
    if (area > circumference)
    {
        cout << "Area is larger than the circumference";
    }
    else
    {
        cout << "Area is not larger than the circumference";
    }
}