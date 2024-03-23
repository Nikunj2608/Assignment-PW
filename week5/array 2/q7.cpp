#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    // for checking the array is palindrome or not
    bool flag = true;
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        cout << "The array is palindrome" << endl;
    }
    else
    {
        cout << "The array is not palindrome" << endl;
    }
}