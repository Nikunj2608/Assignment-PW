#include <iostream>
using namespace std;
int main()
{
    int l;
    cout << "Enter the length of the rectangle : ";
    cin >> l;
    int b;
    cout << "Enter the breadth of the rectangle : ";
    cin >> b;
    int perimeter = 2 * (l + b);
    int area = l * b;
    if (area > perimeter)
    {
        cout << "Area is larger then the perimeter";
    }
    else
    {
        cout << "Perimeter is larger then the area";
    }
}