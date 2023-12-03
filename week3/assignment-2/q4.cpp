#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the amount : ";
    cin >> n;
    for (int i = 1; i <= n + 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                cout << j << " ";
            }
            else
            {
                cout << (char)('A' + j - 1) << " ";
            }
        }
            cout << endl;
    }
}