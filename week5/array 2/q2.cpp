#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[] ={1,2,3,4,5,6,7,8,9,10};
    int max = INT_MIN;
    for(int i=0;i<10;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    cout<<"The largest element is : "<<max<<endl;
    int max2 = INT_MIN;
    for(int i=0;i<10;i++)
    {
        if(arr[i]>max2 && arr[i]<max)
        {
            max2 = arr[i];
        }
    }
    cout<<"The second largest element is : "<<max2<<endl;
    int max3 = INT_MIN;
    for(int i=0;i<10;i++)
    {
        if(arr[i]>max3 && arr[i]<max2)
        {
            max3 = arr[i];
        }
    }
    cout<<"The third largest element is : "<<max3<<endl;
}