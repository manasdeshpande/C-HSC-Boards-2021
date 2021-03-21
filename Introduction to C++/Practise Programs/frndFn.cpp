#include <iostream>
using namespace std;
/*forword declaration--Let the compiler know of an other class coming later*/
class test2;
class test1{
     int sub1;
     int sub2;
    public:
    void read(int m1,int m2){
        sub1=m1;
        sub2=m2;
    }
    void display(){
        cout<<sub1<<"\t"<<sub2;
    }
    friend void avgMarks(test1 t1, test2 t2);
    //Use this frnd function as a common function between two classes test1 and test2
};
class test2{
    private:
    int sub1, sub2;
    public:
    void read(int n1, int n2)
    {
        sub1=n1;
        sub2=n2;
    }
    void display()
    {
        cout<<sub1<<"\t"<<sub2;
    }
    friend void avgMarks(test1 t1, test2 t2);
};
//frnd fn definition--normal fn definition. Used to declare a function which will be shared between two or multiple classes, for example in our case, avgMarks will access the pvt. data between two classes
void avgMarks(test1 t1, test2 t2)
{
    float avg = (t1.sub1+t1.sub2+t2.sub1+t2.sub2)/4.0;
    cout<<"\nAverage of two tests:"<<avg<<"\n";
}
int main(){
    test1 T1;
    test2 T2;
    cout<<"Read data for Test1\n";
    T1.read(45,34);
    cout<<"Read data for Test2\n";
    T2.read(45,43);
    cout<<"Test Marks\n Sub1\tSub2\n";
    T1.display();
    cout<<"\n";
    T2.display();
    avgMarks(T1,T2); //Frnd function
    return 0;
}
