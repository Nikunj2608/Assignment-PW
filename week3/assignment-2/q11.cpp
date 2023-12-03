#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = n - i; k >= 1; k--)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int z = 1; z <= n; z++)
    {
        for (int i = 1; i <= z; i++)
        {
            cout << " ";
        }

        for (int j = n - z; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}