#include <iostream>

using namespace std;


// Pass by address
// The adress of actual parameters are passed to formal parameters
// Formal parameters are pointers

void swap(int *x, int *y) // Formal parameters, which are pointers - take addresses of actual parameters
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a,b; // Actual parameters
    a=10;
    b=20;
    swap(&a, &b); // Send adresses of actual parameters to formal parameters, i.e dereferencing

    cout<<"a = "<<a<<" "<<"and b = "<<b<<endl;
}
