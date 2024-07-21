#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a = 10;
    int *p;  // Initialize a pointer;
    p = &a; // Assign adress of variable-a to pointer variable-p;

    printf("Using pointer, value of a = %d\n", *p);  // Dereferencing
    printf("Prints the same thing, as both are address of a: %d %d", p, &a);
    return 0;
}