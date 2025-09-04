/*
Royal Kids Bank :

Design a Banking App in c  that has the following functionalities:-
User can:-
◆OPEN ACCOUNT by username and password of his choice. On Opening account, his initial balance will be ₹ 25,000/-. 
Once he opens account, he can login by re-entering the same username & password.
◆LOGIN is compulsory to perform any task such as withdrawal, deposit or balance check. If the user name or password do 
not match, he can not Login. Once he is logged in, he can do as many transactions as he wants. He needs to Logout after 
he finishes all the transactions
◆DEPOSIT will enable user to deposit amount of money of his choice. His balance should be updated after the task 
completes.
◆WITHDRAW will enable user to withdraw amount of money of his choice. The only condition is that his balance at any point can not go less than ₹10,000/-. If this can happen after his withdrawal, your program must not allow that
transaction. His balance should be updated after the task completes.
◆CHECK BALANCE will show the latest updated balance to user.
◆LOGOUT will exit the user from the program
You should use these functions in your program: login(), deposit(), withdraw(), checkBalance()

creat account ==> user name  password 

login() ==> user name  password  ==> match  ==> ac ==> 25000 

deposit
withdraw
checkbalance 

constructor  ,  private ,  protectec ,  single level  inheritance 
*/

#include <iostream>
using namespace std;
class user    // base class 
{
    protected :  // accessible  in derived class
        string username; 
        string password; 

    public :
        user(string  u, string  p)
        {
            username=u; 
            password=p;
        }
    bool verify_login(string u, string  p)
    {
        if (username ==u && password ==p)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};
class bank : public user    // bank  ==> derived class
{
    private :
        int balance; 
    
    public : 
        bank(string u , string p) : user(u,p) // constructor calling  base class 
        {
            balance =25000; // intializing balance
        }
    bool login()
    {
        string u , p ;
        cout<<"enter username : ";
        cin>>u;
        cout<<"enter password : ";
        cin>>p;

        if(verify_login(u,p))
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
    void deposit()
    {
        int amt; 
        cout<<"enter the  amt you want to deposit : "; 
        cin>>amt; 
        balance +=amt; 
        cout<<"after depsoit your balance is : "<<balance<<endl;
    }
    void  withdraw() // 30000 -23000 = 7000 
    {
        int amt; 
        cout<<"enter the amt you want to withdraw : ";
        cin>>amt;
        
        if (balance -amt >=10000)  //30000 - 2300 = 28700 >=10000 
        {
            balance -=amt; 
            cout<<"after withdraw your balance is : "<<balance<<endl;
        }
        else 
        {
            cout<<"you have to maintain balance more than 10000 rs. "<<endl;
        }
    }
    void check_balance()
    {
        cout<<"your balance is : "<<balance<<endl;
    }
};
int main()
{
    string uname,pass; 
    cout<<"==========ROYAL KIDS BANk==========="<<endl;
    cout<<"create account : "<<endl;
    cout<<"enter username : ";
    cin>>uname;
    cout<<"enter password : ";
    cin>>pass;

    bank b1(uname,pass); 
    bool  loggedin =false;
    int choice ; 

    while(true)
    {
        if(!loggedin)
        {
            cout<<"1.login \n2.exit"<<endl;
            cin>>choice; 

            if (choice ==1) 
            {
                loggedin=b1.login();

            }
            else 
            {
                cout<<"thx for using our bank"<<endl;
                break;
            }
        }
        else 
        {
            cout<<"1.deposit \n2.withdraw \n3.check balance \n4.exit"<<endl;
            cin>>choice;
            switch(choice)
            {
                case 1 : 
                    b1.deposit();
                    break;
                case 2 :
                    b1.withdraw();
                    break;
                case 3 :
                    b1.check_balance();
                    break;
                case 4 :
                    loggedin=false;
                    break;
                default :
                    cout<<"wrong choice"<<endl;
                    break;
            }
        }
    }
    return 0; 
}   

/*
task  : 1 

you have to given 3 maximum attempts for login  if  fail  in 3 attempts then  you have to  exit from the program.
*/