//Find the factorial of Entered Number
#include <iostream>
using namespace std;
int main(){
    int fact, number;
    fact = 1;
    cout<<"Enter the number: "<<endl;
    cin>>number;
    for(int i =1;i<=number;i++)
    {
        fact=fact*i;
    }
    cout<<"The factorial of the Number  is: "<<fact;
}