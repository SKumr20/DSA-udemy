#include <iostream>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct rectangle r = {10,5};
    
    // Initialize a pointer and assign it to structure r

    struct rectangle *p = &r;

    // Access the members of struct rectangle using pointer
    
    (*p).length = 15;  // The order of operations is important, *p.length is wrong

    // in C++

    p -> length = 20;


}