/*
encapsulation  : 
1.data  blinding  
2.data security
3.private variable ==>  get set method  access control

1. get  method  :  data print  
2 . set  method :  new  value  set . 
*/

# include <iostream>
using namespace std;
class bank 
{
    private  : 
        int accno ;
        string name; 
        int balance=25000; 
    public : 
        bank(int accno ,string name)
        {
            this->accno = accno ;
            this->name = name ;
        }
        void deposit(int amount)
        {
            balance += amount ;
            cout<<"after depositing amt your balance is  :  "<<balance<<endl;
        }
        void withdraw(int amount)
        {
            balance -= amount ;
            cout<<"after withdrawing amt your balance is  :  "<<balance<<endl;
        }
        string  get_name()
        {
            return name; 
        }
        int get_balance()
        {
            return balance; 
        }
        int set_balance(int new_balance)
        {
            balance =new_balance; 
        }
};
int main()
{
    bank b(1234,"pinal");
    cout<<"======without using set method======"<<endl;
    cout<<"name of customer is  :  "<<b.get_name()<<endl;
    b.deposit(1000);
    b.withdraw(500);
    cout<<"balance of customer is  :  "<<b.get_balance()<<endl;

    cout<<"======using set method======"<<endl;
    b.set_balance(50000); 
    b.deposit(1000);
    b.withdraw(5000);
    cout<<"balance of customer is  :  "<<b.get_balance()<<endl;

    return 0;
}
