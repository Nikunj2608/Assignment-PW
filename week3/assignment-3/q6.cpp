#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value : ";
    cin >> n;
    for (int i = 1; i <= n - 2; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << "*";
        int m = 2 * (n - i - 1);
        for (int j = 0; j < m - 1; j++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }
}