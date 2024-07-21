#include <iostream>

using namespace std;

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    int x, y;
    cout<<"Enter first number - ";
    cin>>x;
    cout<<"Enter second number - ";
    cin>>y;
    int z = add(x, y);
    cout<<"The sum is - "<<z;
    return 0;
}