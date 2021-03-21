#include<iostream>
using namespace std;
int main(){
    double a,c=0;   
    int i;
    cout<<"Enter a no: ";
    cin>>a;
    for(i=0;i<=a;i++)
    {
        if(a%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        cout<<"Prime Number:    "<<a;
    }
    else{
        cout<<"Not a prime";
    }
    return 0;
}