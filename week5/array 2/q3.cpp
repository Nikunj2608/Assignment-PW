#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,7,8,46};
    bool flag = true;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] <= arr[i + 1])
        {

            continue;
        }
        else
        {
            flag = false;
            cout << "The array is not sorted" << endl;
            break;
        }
    }
    if (flag == true)

    {
        cout << "The array is sorted" << endl;
    }
}