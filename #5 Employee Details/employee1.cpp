/*WAP to print Employee Details such as:
Employee ID, salary, name.
Also, find the greatest salary among two employees*/
#include <iostream>
using namespace std;
class employee
{
    private:
    int emp_id, emp_sal;
    char name[20];
    public:
    void read()
    {
        cout<<"Enter Employee ID, Employee salary, name:\n";
        cin>>emp_id>>emp_sal>>name;
    }
    void display()
    {
        cout<<"******";
        cout<<"\nEmployee Id: "<<emp_id<<"\t Name: "<<name<<"\t Salary: "<<emp_sal<<endl;
        cout<<"******";
    }
    int getSalary()
    {
        return emp_sal;
    }
};
int main(){
    employee e1, e2;
    //Call the Read fn for both the objects
    e1.read();
    e2.read();
    cout<<"Employee having more Salary:\n";
    if(e1.getSalary()>e2.getSalary())
    {
        e1.display();
    }
    else
    {
        e2.display();
    }
    return 0;
}