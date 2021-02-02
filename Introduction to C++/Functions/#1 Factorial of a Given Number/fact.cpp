//Print Factorial of a given number
#include<iostream>
using namespace std;

int factorial(int n); //Function Prototyping --> Let the compiler know of a function which will come up later

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n; //User input

    cout << "Factorial of " << n << " = " << factorial(n);

    return 0;
}

int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1); 
    else
        return 1;
}