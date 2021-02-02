//Check for prime number
#include <iostream>
using namespace std;
int main(){
    int number, C=0;
    cout<<"Enter the number: ";
    cin>>number;
    for(int i=2;i<number;i++)
    {
        if(number%i==0)
        {
            C=1;
        }
    }
    if(C==0)
    {
        cout<<"The number is prime";
    }
    else
    {
        cout<<"Not prime";
    }
}