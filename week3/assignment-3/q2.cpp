#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value : ";
    cin >> n;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int k = 1; k <= n - i - 1; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            cout << (char)('A' + j - 1) << " ";
        }
        cout << endl;
    }
}