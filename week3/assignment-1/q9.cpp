#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 500; i++)
    {
        int x = i;
        int cubeSum = 0;
        while (x > 0)
        {
            int ld = x % 10;
            x = x / 10;
            cubeSum += (ld * ld * ld);
        }
        if (i == cubeSum)
        {
            cout << cubeSum << endl;
        }
    }
}