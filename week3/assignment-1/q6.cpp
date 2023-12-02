#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. you want : ";
    cin >> n;
    int z = n;
    int v = n;
    int rev = 0;
    int ld = 1;
    int sd;
    while (n > 0)
    {
        ld *= 10;
        n = n / 10;
    }
    ld = ld / 10;
    while (ld > 0)
    {
        sd = z % 10;
        z /= 10;
        rev += sd * ld;
        ld = ld / 10;
    }
    cout << rev + v;
}