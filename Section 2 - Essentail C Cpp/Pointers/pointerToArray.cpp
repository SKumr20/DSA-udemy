#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int A[5] = {2,4,6,8,10};
    int *p;
    p = A;  // No need to give & symbol, as name of array-A is the starting point of array itself. Or we can write p = &A[0] 

    for (int i=0; i<5; i++)
    {
        cout<<p[i]<<endl;  // SAME AS cout<<A[i]<<endl;
    }

    return 0;
}