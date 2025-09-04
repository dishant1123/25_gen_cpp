/*
public , private  , protected   == > single level inheritance : 

created acc   == > user name  pass created  
login  user  name ==pass  match   
        account  =25000 ==> balance 

protected  ==> with class + inheritance  ==> modify ==> public ==> method 
*/

#include <iostream>
#include <string>

using namespace std;

class User   //  user base class 
{
    protected : // accessible  in derived class
        string username; 
        string password;
    public : 
        User(string  u , string p )
        {
            username = u;
            password = p;
        }
    bool verify_login(string u , string p)
    {
        if (u==username && p==password)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
class bank : public User    // bank derived class 
{
    private : // accessible only in derived class
        int balance; 
    
    public : 
        bank(string u , string p) : User(u,p)  // constructor  calling from base class  
        {
                balance =25000; // intializing balance
        }
    bool login()
    {
        string u ,p; 
        cout<<"enter username : ";
        cin>>u;
        cout<<"enter password : ";
        cin>>p;

        if (verify_login(u,p))
        {
            cout<<"login success"<<endl;
            return true;
        }
        else 
        {
            cout<<"login failed"<<endl;
            return false;
        }
    }
    void depsoit()
    {
        int amt; 
        cout<<"enter the amount  you want to deposit : "; 
        cin>>amt; 
        balance +=amt; 
        cout<<"depsoit successfully and your updated balance is : "<<balance<<endl;
    }
    void withdraw()
    {
        int amt; 
        cout<<"enter the amount  you want to withdraw : ";
        cin>>amt;

        if (balance - amt >=10000)   // 25000 -22000 >10000
        {
            balance -=amt;
            cout<<"withdraw successfully and your updated balance is : "<<balance<<endl;
        } 
        else 
        {
            cout<<"not enough balance to withdraw you have to require 10000 rs min."<<endl;
        }
    }
    void check_balance()
    {
        cout<<"your current balance is : "<<balance<<endl;
    }
};

int main()
{
    string uname, pass; 
    cout<<"enter username : ";
    cin>>uname;
    cout<<"enter password : ";
    cin>>pass;

    bank b(uname ,pass);

    bool  loggedin =false; 
    int choice ;

    while(true)
    {
        if(!loggedin)
        {
            cout<<"\n1.login \n2.exit\n enter your choice : ";
            cin>>choice;

            if (choice ==1)
            {
                loggedin=b.login();
            }
            else 
            {
                cout<<"thank you for using this bank"<<endl;
                break;
            }
        }
        else 
        {
            cout<<"\n =======ROYAL KID BANK=======\n";
            cout<<"1.deposit \n2.withdraw \n3.check balance \n4.exit\n enter your choice : ";
            cin>>choice; 

            switch (choice)
            {
            case 1: b.depsoit();
                    break;
            case 2: b.withdraw();
                    break;
            case 3: b.check_balance();
                    break;
            case 4 :loggedin=false;
                    cout<<"logged out"<<endl;
                    break;
            default:
                    cout<<"invalid choice"<<endl;
            }
        }
    }

    return 0;
}