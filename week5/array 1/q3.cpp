#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[] = {123,3424,435,58,78};
    int min = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] <= min)
        {
            min = arr[i];
        }
        
    }
    cout<<min;
}