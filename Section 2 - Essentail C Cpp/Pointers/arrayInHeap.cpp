#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int *p; // Declare pointer
    
    p = (int *) malloc(5 * sizeof(int)); // Allocates memory for array of 5 integers in heap, and pointer p points to it.
    // p = new int[5]; // c++ method, acts just like malloc function

    p[0] = 10;
    p[1] = 15;
    p[2] = 16;
    p[3] = 17;
    p[4] = 18;

    for (int i=0; i<5; i++)
    {
        cout<<p[i]<<endl;
    }
    // Disallocate the memory allocated in heap, after using it.
    // delete [] p; // C++
    // free(p); 

    // Size of pointer is independent of data type.
    cout << sizeof(p)<<endl;
    char *c;
    cout << sizeof(c);

    return 0;
}