//Student Info
#include <iostream>
using namespace std;
class student{
    private:
        int rno;
        char name[20];
    public:
        void read()
        {
                cout<<"Enter Name, Roll No: ";
                cin>>name>>rno;
        }
        void display()
        {
            cout<<"Roll No: "<<rno<<"\t Name: "<<name<<endl;
        }
};
int main(){
    student s;
    //s.rno=19;
    s.read();
    s.display();
    return 0;
}