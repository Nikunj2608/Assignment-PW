#include <iostream>
using namespace std;
int main()
{
    int x1, x2, x3, y1, y2, y3;
    cout << "Enter the first point : ";
    cin >> x1 >> y1;
    cout << "Enter the second point : ";
    cin >> x2 >> y2;
    cout << "Enter the third point : ";
    cin >> x3 >> y3;
    int ans = (x2 * y3 - y2 * x3) - (x1 * y3 - y1 * x3) + (x1 * y2 - x2 * y1);
    if (ans == 0)
    {
        cout << "Collinear";
    }
    else
    {
        cout << "Non Collinear";
    }
}