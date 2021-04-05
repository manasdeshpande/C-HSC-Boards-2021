
#include <iostream>
using namespace std;
int main(){
    int a[10], N, F, L, mid, key, flag=0, i; // Initialization
    cout << "Enter number of elements of an array:\t";
    cin >> N;
    cout << "Enter Elements of array in Ascending Order:\t";
    for(i=0;i<N;i++)
    {
        cin>>a[i];
    }
    
    cout << "Enter key element to be searched:\t";
    cin >> key;


    F=0;
    L=N-1;

    while(F<=L){
        mid=(F+L)/2;
        if(key==a[mid])
        {
            flag=1;
            cout << key << "is found at position" << mid << endl;
            break;
        }
        else{
            if(key > a[mid])
                F=mid+1;
            else
                L=mid-1;
        }
    }
    if(flag==0)
     cout << "Key Element not found in the given array\n";
     return 0;
}