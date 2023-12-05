#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "*";
    }
    for (int i = n - 1; i >= 1; i--)
    {
        cout << "*";
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "*";
    }
    for (int i = n - 1; i >= 1; i--)
    {
        cout << "*";
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << " ";
            a++;
        }
        for (int z = 1; z <= n - i; z++)
        {
            cout << "*";
            a++;
        }

        cout << endl;
    }
}