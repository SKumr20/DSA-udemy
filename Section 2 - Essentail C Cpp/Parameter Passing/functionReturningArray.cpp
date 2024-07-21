#include <iostream>

using namespace std;

int * fun(int size)
{
    int *p;
    // Allocate memory in heap
    p = new int[size];  // Can also use malloc function
    // This creates an array

    for (int i=0; i<size; i++)
    p[i] = i+1;

    return p;
}

int main()
{
    int *ptr, sz = 5;
    ptr=fun(sz);

    for (int i=0; i<sz;i++)
    cout<<ptr[i]<<endl;

    return 0;
}

// Dynamic memory - array is created in a function, but main function can access it.