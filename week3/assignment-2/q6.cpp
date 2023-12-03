#include <iostream>
using namespace std;
int main()
{
    int l;
    cout << "Enter the length of the quadrilateral : ";
    cin >> l;
    int b;
    cout << "Enter the breadth of the quadrilateral : ";
    cin >> b;
    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if (i == 1 || j == 1 || i == l || j == b)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}