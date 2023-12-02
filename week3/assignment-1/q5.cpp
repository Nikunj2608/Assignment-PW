#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number you want : ";
    cin >> n;
    int ld;
    int sum = 0;
    while (n > 0)
    {
        ld = n % 10;
        n /= 10;
        if (ld % 2 == 0)
        {
            sum += ld;
        }
    }
    cout << sum;
}