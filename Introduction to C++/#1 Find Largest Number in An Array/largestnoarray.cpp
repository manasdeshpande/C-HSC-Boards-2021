//Program to find the largest number in an array
#include <iostream>
using namespace std;
int main(){
    int num[10], max;
    cout<<"Enter 10 numbers:\t";
    //For loop for taking user input for numbers
    for(int i =0; i<10;i++){
            cin>>num[i];
    }
                max=num[0];

    //Check the Largest Number among the 10 numbers using for loop
    for(int j=1;j<10;j++)
    {
        if(max<num[j])
        max=num[j];
    }
    cout<<"The largest number in the array is:  "<<max;
}