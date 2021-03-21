#include<iostream>
using namespace std;
class ArrOfObjEmp{
    private:
    char name[20];
    int id, salary;
    public:
    int read()
    {
        cin>>id>>salary>>name;
        return 0;
    }
    int display()
    {
        cout<<id<<"\t"<<salary<<"\t"<<name<<endl;
        return 0;
    }
}; //End
int main(){
    //array of objects
    //Declaration
    ArrOfObjEmp A[5];
    //Initialize--Read Fn--For Loop
    for(int i=0;i<5;i++)
    {
        cout<<"Enter Employee id: "<<i+1<<"\tName, "<<"Salary";
        A[i].read();
    }
     //Display
    cout<<"Employee Details\n";
    cout<<"Emp IDs\tEmpName\tEmpSal\n";
    for(int i=0;i<5;i++)
    {
        A[i].display();
    }

}