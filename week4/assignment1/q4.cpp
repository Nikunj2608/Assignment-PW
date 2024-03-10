#include<iostream>
using namespace std;
void digSq(int n)
{
    int count = 0;
    while (n>0)
    {
       count++;
       n=n/10; 
    }
    int  square = count * count;
    cout<<square;
}
int main()
{
    int n ; 
    cout<<"Enter the no. : " ;
    cin>>n;
    // n = n / 10 ;
    // cout<<n;
    digSq(n);
}