#include <iostream>
using namespace std;
int main()
{
    int arr[] = {654, 2, 44545, 78912, 761, 334, 644};
    int n = sizeof(arr) / sizeof(arr[0]);
    int seven = 0;
    int sodd = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            seven = seven + arr[i];
        }
        else
        {
            sodd = sodd + arr[i];
        }
        

    }
    cout<<"The difference between the sum of even and odd positioned elements is : "<<sodd-seven << endl;
}