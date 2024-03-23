#include <iostream>

using namespace std;
int main()
{
    int arr[] = {1, 44, 54, 78, 54, 78 };

    bool flag = false;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                cout << arr[i] << " ";
                break;
            }
        }
    }
    if (flag == false)
    {
        cout << "No Duplicate";
    }
    else cout<< "Duplicate found";
}