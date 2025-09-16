/*
abstraction  : 
means showing only eassiential detalis  and hiding  implementation detalis from the user. 

1. abstract  class (with pure virtual function) 
2. interfaces (pure abstract class )
*/

// abstract class with  pure virtual function  : 

/*
#include <iostream>
using namespace std;
class vehicle 
{
    public : 
        virtual void start() =0;  // pure virtual  function 
    
    void  fuel_type()
    {
        cout<<"fuel type : petrol / diesel"<<endl;
    }
};
class car : public vehicle 
{
    public : 
        void start() override 
        {
            cout<<"car start"<<endl;
        }
};
int main()
{
    vehicle *v1 =new car; 

    v1->start(); //  car start ==> calls car's implementation
    v1->fuel_type();  // fuel type : petrol / diesel ==> calls base  class method 

    return 0;

}
*/

//2 : interfaces (pure abstract class ) :

#include <iostream>
using namespace std;
class payment 
{
    public : 
        virtual void pay(int amt)=0; 
        virtual void refund(int amt)=0;
};

class creditcard : public payment 
{
    public : 
        void pay(int amt) override 
        {
            cout<<"amt : "<<amt<<" payed by credit card"<<endl;
        }
        void refund(int amt) override
        {
            cout<<"amt : "<<amt<<" refunded by credit card"<<endl;
        } 
};

class UPI : public payment 
{
    public : 
        void pay(int amt) override
        {
            cout<<"amt : "<<amt<<" payed by UPI"<<endl;
        }
    void refund(int amt) override
    {
        cout<<"amt : "<<amt<<" refunded by UPI"<<endl;
    }
};

int main()
{
    payment *p1 =  new creditcard;
    payment *p2 = new UPI; 

    p1->pay(10000); 
    p1->refund(100);

    p2->pay(15000); 
    p2->refund(1500);
    return 0;
}