#include <iostream>
using namespace std;
int main()
{
    float r;
    cout << "Enter the radius of the cylinder : ";
    cin >> r;
    float h;
    cout << "Enter the height of the cylinder : ";
    cin >> h;
    float pi = 3.14;
    float volume = pi * r * r * h;
    cout << volume;
}