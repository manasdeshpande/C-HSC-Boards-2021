#include <iostream>
using namespace std;
int main()
    {
        int i;
        int sum=0;
        for(i=1;i<=100;i=i+2)
        {
        sum=sum+i;
        }
        cout<<"Sum of First 100 odd numbers:    "<<sum;
        return 0;
    }