#include <iostream>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    // Create a pointer to the struct
    struct rectangle *p;
    
    // allocate memory in heap using malloc()
    p = (struct rectangle *) malloc(sizeof(struct rectangle));

    // in c++ - p = new rectangle;

    // Set the values
    p -> length = 15;
    p -> breadth = 10;

    cout<<p->breadth<<endl;

    return 0;
}