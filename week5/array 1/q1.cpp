#include<iostream>
using namespace std;
int main()
{
    int arr[] = {64,545,5,54,5};
    int mult = 1;
    for (int i = 0; i < 5; i++)
    {
        mult = mult * arr[i];
    }
    cout<<mult;
}