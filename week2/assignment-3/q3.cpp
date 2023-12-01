#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. of which you need the table of : ";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " X " << i << " = " << n * i << endl;
    }
}