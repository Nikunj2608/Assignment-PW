#include<iostream>
using namespace std;
int main()
{
    int arr[] = {65448,55,545,596,326,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << " Original Array"<<endl;
    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0 ; i < n ; i++)
    {
        if(i%2==0)
        {
            arr[i] = arr[i] + 10;
        }
        else{
            arr[i] = arr[i] * 2;
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }

}