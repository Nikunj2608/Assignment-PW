#include<iostream>
using namespace std;
void area(int r)
{
    float area = 3.141326 * r * r ;
    cout<<area;
}
int main()
{
    int r;
    cout<<"Enter the radius of the circle: ";
    cin>>r;
    area(r);
}