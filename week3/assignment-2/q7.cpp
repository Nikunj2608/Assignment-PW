#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value : ";
    cin >> n;
    for (int i = n ; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}