#include<iostream>
using namespace std;
int main()
{
    int x = 1123;
    int y = 1332;
    int *p = &x;
    int *p1 = &y;
    cout<<*p * *p1;
}