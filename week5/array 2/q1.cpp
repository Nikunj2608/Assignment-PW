#include<iostream>
using namespace std;
int main()
{
    int arr[] ={1,2,3,4,5,6,7,8,9,10};
    int x ;
    cout<<"Enter the no. such that greater no. then that could be printed : ";
    cin>>x;
    for(int i=0;i<10;i++)
    {
        if(arr[i]>x)
        {
            cout<<arr[i]<<" ";
        }
    }
}