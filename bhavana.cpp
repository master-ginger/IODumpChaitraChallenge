//Q.10 
#include <iostream>
using namespace std;
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
    return n*factorial(n-1);
    }
}
int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<factorial(n);
    return 0;
}
