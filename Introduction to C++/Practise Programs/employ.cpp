#include <iostream>
using namespace std;
class Employee
{
    private:
    char name[20];
    int id, salary;
    public:
    int read()
    {
        cout<<"Enter Employee id, salary, name: ";
        cin>>id>>salary>>name;
        return 0;
    }
    int display()
    {
        cout<<"Employee ID: \n"<<id<<"\nSalary: \n"<<salary<<"\nName: \n"<<name;
    }
};

int main()
{
    Employee e1;
    e1.read();
    e1.display();
}