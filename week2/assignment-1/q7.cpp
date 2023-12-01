#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the x-coordinate : ";
    cin >> x;
    int y;
    cout << "Enter the y-coordinate : ";
    cin >> y;
    if (y == 0)
    {
        cout << "It lies on the x-axis";
    }
    else if (x == 0)
    {
        cout << "It lies on the y-axis";
    }
    if (x == 0 && y == 0)
    {
        cout << "It lies on the origin";
    }
}