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
        cout<<"Enter Employee id, salary, name: ";
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
    Employee e1, e2;
    e1.read();
    e2.read();

    if(e1.getSalary()>e2.getSalary())
    {
        e1.display();
    }
    else
    {
            e2.display();
    }
    return (0);
}
