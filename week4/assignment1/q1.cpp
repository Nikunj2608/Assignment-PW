#include <iostream>
using namespace std;
void firstNSq(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i * i << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the no. of the terms : ";
    cin >> n;
    firstNSq(n);
}