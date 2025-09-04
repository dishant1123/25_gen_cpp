/*
hierarchy inheritance : multiple derivred class inherit from same base class 
class a 
class b (a)
class c(a)
*/
#include <iostream>
using namespace std;
class bank 
{
    protected :
        string name; 
        int accno; 
        int balance; 
    public : 
        bank(string name,int accno,int balance)
        {
            this->name=name; 
            this->accno=accno;
            this->balance=balance;
        }
    void deposit(int amt)
    {
        balance+=amt;
        cout<<"deposited amount : "<<amt<<endl;
        cout<<"after  depsoit balance : "<<balance<<endl;
    }
    void withdraw(int amt)
    {
        balance-=amt;
        cout<<"withdrawed amount : "<<amt<<endl;
        cout<<"after withdraw balance : "<<balance<<endl;
    }
    void  show_account()
    {
        cout<<"name : "<<name<<endl;
        cout<<"account number : "<<accno<<endl;
        cout<<" final balance : "<<balance<<endl;
    }
};
class savings : public bank 
{
    public : 
    savings(string name,int accno,int balance,int interest_rate):bank(name,accno,balance)//  base class const call
    {
    }
    void interest_rate()
    {
        int  interest =8.9;
        balance+=balance*interest/100; // bal =bal + bal *int /100 
        cout<<"interest : "<<interest<<endl;
        cout<<"after interest : "<<balance<<endl;
    }

};
class current : public bank 
{
    public : 
        int  overdraft_limit;
    current(string name , int accno , int balance , int overdraft_limit):bank(name,accno,balance)
    {
        this->overdraft_limit=overdraft_limit;
    }
    void withdraw(int amt)
    {
        if (amt <=balance +overdraft_limit)
        {
            balance-=amt;
            cout<<"withdrawed amount : "<<amt<<endl;
            cout<<"after withdraw balance : "<<balance<<endl;
        }
        else 
        {
            cout<<"overdraft limit exceeded"<<endl;
        }
    }
};

int main()
{
    cout<<"saving account"<<endl;   
    savings s1("pinal",72930,30000,8.9);
    s1.deposit(5000);
    s1.withdraw(15000);
    s1.show_account();

    cout<<"current account"<<endl;
    current c1("het",9234,25000,10000); 
    c1.deposit(5000);
    c1.withdraw(35000);
    c1.show_account();
    return  0;
}

/*
task  :1 

menu  driven  :  1. saving  account  2. current  account 
friend  function  : 
*/