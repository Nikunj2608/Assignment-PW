#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 4, 7, 9};
    int n = sizeof(arr) / 4;
    int x = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != x)
        {
            flag = true;
            cout << i + 1;
            break;
        }
        else x++;
    }
    if (flag == false)
    {
        cout << "There was no missing element";
    }
}