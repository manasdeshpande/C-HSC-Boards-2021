#include<iostream>
using namespace std;
class simp{
    double pamt;
    int noyears;
    double rateofinterest;
    double si;
    public:
        void read(){
            cout<<"Enter P.Amount, No. of years, Rate of Interest \n";
            cin>>pamt>>noyears>>rateofinterest;
        }
        void display(){
            cout<<"P. amount:   Rs"<<pamt<<"\t No.years:"<<noyears<<"\t Rate of Interest:"<<rateofinterest<<"%"<<endl;
        }
        void getamount(){
            si=(pamt*noyears*rateofinterest)/100;
            cout<<"Interest in Amt. is: "<<si;
        }
};
int main(){
    simp s;
    s.read();
    s.display();
    s.getamount();
    return 0;
}