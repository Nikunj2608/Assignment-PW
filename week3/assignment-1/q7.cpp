#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. of terms : ";
    cin >> n;
    int fact = 1;
    for (int i = 1; i <= 10; i++)
    {   
        fact = fact * i;
        cout << fact;
        cout << endl;
    }
}