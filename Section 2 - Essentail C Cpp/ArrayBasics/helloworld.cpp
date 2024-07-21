#include <iostream>
#include <stdio.h>

struct rectangle
{
    int length;
    int breadth;
};

int main()
{   
    // struct rectangle r1;
    // std::cin>>r1.length;
    // std::cout<<r1.length;

    std::cout<<"Enter two integers\n";
    int a;
    int b;
    std::cin>>a>>b;
    int sum = a+b;
    std::cout<<sum;

    
    return 0;
}