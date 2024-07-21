#include <iostream>

using namespace std;


// Pass by value
// Use when function is returning some results
// Changes to formal parameters does not reflect on actual parameters

void swap(int x, int y) // Formal parameters
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a,b; // Actual parameters
    a=10;
    b=20;
    swap(a,b);
    cout<<"a = "<<a<<" "<<"and b = "<<b<<endl;

}
