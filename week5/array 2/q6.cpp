#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 2, 1, 1, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0 ; i < n ; i++)
    {
            bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if(j==i) continue;
            if(arr[i]==arr[j])
            {
                flag=false;
                break;

            }

        }
        if(flag ==true)
        {
            cout<<arr[i]<<endl;
            // break;
        }
    }
}