#include <iostream>
using namespace std;
class Time{
     int hrs, min;
     public:
        void read(int h, int m)
        {
            hrs=h;
            min=m;
        }
        void display()
        {
            cout<<hrs<<":"<<min;
        }
        void add(Time t1, Time t2)
        {
            min = t1.min+t2.min;
            hrs =t1.hrs+t2.hrs+ (min/60);
            min = min%60;
            
        }
};

int main()
{
    
    Time T1,T2,T3;
    cout<<"Read data for Time T1\n";
    T1.read(4,34);
    cout<<"Read data for Time T2\n";
    T2.read(4,43);
    cout<<"\nTime T1\n";
    T1.display();
    cout<<"\nTime T2\n";
    T2.display();
    cout<<"\n";
   
    T3. add (T1,T2);
    cout<<"\nTime T3\n";
    T3.display();
    return 0;
    
}
