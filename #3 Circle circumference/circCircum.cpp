//WAP to find Circumference of a circle using classes and objects
#include <iostream>
using namespace std;
class circum{
    private:
    double pi = 3.14, circumference;
    int r;
    public:
    void read()
    {
        cout<<"Enter the value of Radius of the circle:\n";
        cin>>r;
    }
    void display(){
        cout<<"Circumference of the circle: ";
        circumference = 2*pi*r;
        cout<<circumference;
    }

};
int main(){
    circum C1;
    C1.read();
    C1.display();
}