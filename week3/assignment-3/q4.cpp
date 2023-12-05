#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value : ";
    cin >> n;
    for (int j = 0; j <= 2 * n - 1; j++)
    {
        cout << (char)('A' + j) << " ";
    }
    cout << endl;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << (char)('A' + j) << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << (char)('A' + n + i + j - 1) << " ";
        }
        cout << endl;
    }
}