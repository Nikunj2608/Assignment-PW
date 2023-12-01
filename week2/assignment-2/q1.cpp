#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the amount : ";
    cin >> n;
    int n1, n2, n5, n10, n20, n50, n100, n200, n500;
    n1 = n2 = n5 = n10 = n20 = n50 = n100 = n200 = n500 = 0;
    switch (n >= 500)
    {
    case 1:
        n500 = n / 500;
        n -= n500 * 500;
        break;
    }
    switch (n >= 200)
    {
    case 1:
        n200 = n / 200;
        n -= n200 * 200;
        break;
    }
    switch (n >= 100)
    {
    case 1:
        n100 = n / 100;
        n -= n100 * 100;
        break;
    }
    switch (n >= 50)
    {
    case 1:
        n50 = n / 50;
        n -= n50 * 50;
        break;
    }
    switch (n >= 20)
    {
    case 1:
        n20 = n / 20;
        n -= n20 * 20;
        break;
    }
    switch (n >= 10)
    {
    case 1:
        n10 = n / 10;
        n -= n10 * 10;
        break;
    }
    switch (n >= 5)
    {
    case 1:
        n5 = n / 5;
        n -= n5 * 5;
        break;
    }
    switch (n >= 2)
    {
    case 1:
        n2 = n / 2;
        n -= n2 * 2;
        break;
    }
    switch (n >= 1)
    {
    case 1:
        n1 = n / 1;
        n -= n1 * 1;
        break;
    }
    cout << "The notes of 500 : " << n500 << endl;
    cout << "The notes of 200 : " << n200 << endl;
    cout << "The notes of 100 : " << n100 << endl;
    cout << "The notes of 50 : " << n50 << endl;
    cout << "The notes of 20 : " << n20 << endl;
    cout << "The notes of 10 : " << n10 << endl;
    cout << "The notes of 5 : " << n5 << endl;
    cout << "The notes of 2 : " << n2 << endl;
    cout << "The notes of 1 : " << n1;
}