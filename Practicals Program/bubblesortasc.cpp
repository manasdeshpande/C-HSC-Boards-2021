#include <iostream>
using namespace std;
int main() {
    int a[10], n, i, j, tmp; //Initialisation
    cout << "Enter number of elements of an array:\t";
    cin >> n;
    cout << "Enter Elements of array:\t";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //bubble sort
    //First Iteration
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j] > a[j+1])
            {
                tmp = a[j];
                a[j]=a[j+1];
                a[j=1]=tmp;
            }
        }
    }
    //Output
    cout << "Sorted Array Elements:\t";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}