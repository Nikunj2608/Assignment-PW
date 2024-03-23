#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5};
    //check if an array is a subset of another 
    int n = sizeof(arr)/sizeof(arr[0]);
    int arr2[] = {1,2,3};
    int m = sizeof(arr2)/sizeof(arr2[0]);
    int i = 0 , j = 0 ;
    while(i<n && j<m)
    {
        if(arr[i] == arr2[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    if(j==m) cout<<"Yes";
    else cout<<"No";
    
}