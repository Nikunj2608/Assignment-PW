#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[] = {1232,232,234,34534,56};
    int max  = INT_MIN; 
    int max2  = INT_MIN; 
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>max)
        {
            max2 = max;
            max =  arr[i]; 
        }
        else if (max2<arr[i] && arr[i]!=max)
        {
            max2 = arr[i];
        }
        
    }
    cout<<max2;
    
   return 0;
}