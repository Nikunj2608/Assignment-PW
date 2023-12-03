#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter the value : ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        int s = i;
        for (int j = 1; j <= i; j++)
        {
            cout<<s;
            s--;
        }
        cout<<endl;
    }
    
}