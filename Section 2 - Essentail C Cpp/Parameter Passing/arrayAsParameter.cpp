#include <iostream>

using namespace std;

void fun(int *A, int n)
//void fun(int A[], int n) // int A[] acts as pointer to array, so we can use *A as well
{
    A[0] = 15;
    // Since arrays are only passed by value, changing array values inside the function will change the array that the function is called upon too.
    for (int i=0; i<n; i++)
    {
        cout<<A[i]<<endl;
    }
}


int main()
{
    int A[] = {2,4,6,8,10};
    int n=5;
    fun(A,n);
}