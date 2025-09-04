/*

enter the account number  for  verify : 11234 
deposit 
withdraw 
check balance 
*/

// #include <iostream>
// using namespace std;
// class bank
// {
//     public:
//         int accno =11234;   // rollno , name ==> data member  ==>class 
//         string name="pinal";
//         int balance =25000;
    
//     void depsoit(int amt)
//     {
//         balance=balance+amt;
//         cout<<"deposited amount is  : "<<amt<<endl;
//     }
//     void withdraw(int amt)
//     {
//         if (balance -amt >=10000)
//         {
//             balance=balance-amt;
//             cout<<"withdrawn amount is  : "<<amt<<endl;
//         }
//         else 
//         {
//             cout<<"min balance  require 10000 ."<<endl;
//         }
//     }
//     void check_balance()
//     {
//         cout<<"your final balance is  : "<<balance<<endl;
//     }
//     void show()
//     {
//         cout<<"account number is  : "<<accno<<endl;
//         cout<<"name is  : "<<name<<endl;
//         cout<<"balance is  : "<<balance<<endl;
//     }
// };
// int main()
// {
//     bank b1;  // class name  object name

//     int acc_no_verify;
//     cout<<"enter the account  number  for verification :";
//     cin>>acc_no_verify;
//     //b1.show();
//     if (acc_no_verify ==b1.accno)
//     {
//         b1.show();
//         b1.depsoit(10000); 
//         b1.withdraw(5000); 
//         b1.check_balance();
//     }
//     else 
//     {
//         cout<<"wrong account number"<<endl;
//     }
//     return 0;
// }


// private  class : 

// #include <iostream>
// using namespace std;
// class student
// {
//     private : 
//         int rollno ; 
//         string name; 
//         int age;
//     public : 
//         void scan()
//         {
//             cout<<"enter rollno  : ";
//             cin>>rollno;
//             cout<<"enter name  : ";
//             cin>>name;
//             cout<<"enter age  : ";
//             cin>>age;
//         }
//         void show()
//         {
//             cout<<"rollno  : "<<rollno<<endl;
//             cout<<"name  : "<<name<<endl;
//             cout<<"age  : "<<age<<endl;
//         }
// };
// int main()
// {
//     student s1; 
//     s1.scan();
//     s1.show();

//     //s1.rollno ==> error  bcz  you can't access private data member  outside the class.
//     return 0;
// }

