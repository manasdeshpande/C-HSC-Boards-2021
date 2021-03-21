#include <iostream>
using namespace std;
class Employee
{
    private:
    int id;
    char name[20];
    int salary;
    public:
    int read()
    {
        //cout<<"Enter Employee id, salary, name: ";
        cin>>id>>salary>>name;
        return (0);
    }
    int display()
    {
        cout<<"Employee ID: \n"<<id<<"\nSalary: \n"<<salary<<"\nName: \n"<<name;
        return (0);
    }
    int getSalary()//Need to access private data member-public member function
    { 
        return salary;
    }
};

int main()
{
   int i;
   //array of objects
    //Declaration
    Employee A[5];
    //Initialize--Read Fn--For Loop
    for(i=0;i<5;i++)
    {
        cout<<"Enter Employee"<<i+1<<"Id, Name and Salary\n";
        A[i].read();
    }

   int max = A[0].getSalary(); //assumption
    for(i=1;i<5;i++)
    {
        if(A[i].getSalary()>max)
        {
            max=A[i].getSalary();
        }
    }

     //Display
    cout<<"Employee Details\n";

    for(int i=0;i<5;i++)
    {
        if(A[i].getSalary()==max)
        A[i].display();
    }
    
return 0;
}
