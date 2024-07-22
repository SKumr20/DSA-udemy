#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
}

int main()
{
    // Initializing structure
    // In C, writing "struct" prefix is mandatory, but not in c++ 
    struct Rectangle r={10,5};
    printf("Length %d \nBreadth %d\n", r.length, r.breadth);

    return 0;
}