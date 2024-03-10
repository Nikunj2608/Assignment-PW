#include <iostream>
using namespace std;
void odd(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
    }
}
int main()
{
    int a;
    cout << "Enter the first no. : ";
    cin >> a;
    int b;
    cout << "Enter the second no. : ";
    cin >> b;
    odd(a, b);
}