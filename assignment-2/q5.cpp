#include <iostream>
using namespace std;
int main()
{
    char ch1;
    cout << "Enter the first character : ";
    cin >> ch1;
    char ch2;
    cout << "Enter the second character : ";
    cin >> ch2;
    int a = (int)ch1;
    int b = (int)ch2;
    cout << a - b;
}