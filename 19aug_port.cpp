// protected  class :

/*
protected  class : with class and sub class class. 
modify  sub class. 

directly  ==> method . 

*/

// #include <iostream>
// using  namespace std; 
// class student //base
// {
//     public : 
//         string name; 
//         int rollno; 
//     protected :
//         int age=20;
    
//     public :
//         void scan()
//         {
//             cout<<"enter rollno  : ";
//             cin>>rollno;
//             cout<<"enter name  : ";
//             cin>>name;
//         }
//         void  show()
//         {
//             cout<<"rollno  : "<<rollno<<endl;
//             cout<<"name  : "<<name<<endl;
//             cout<<"age  : "<<age<<endl;
//         } 
// };
// class clg : public student  // derived class
// {
//     public : 
//         void  modify_age()
//         {
//             age =29;
//         }
//         void show()
//         {
//             cout<<"age  : "<<age<<endl;
//         }
// };
// int main()
// {

//     // student s1; 
//     // s1.scan();
//     // s1.show();

//     clg c1; 
//     c1.modify_age();
//     c1.scan();
//     c1.show();// age  modify _age  = 29 

//     return 0; 

// }


// bank : 

// #include <iostream>
// using namespace std;
// class bank
// {
//     public : 
//         int accno =1224;
//         string name  = "pinal"; 
//     protected : 
//         int balance =25000;
//     public : 
//         void deposit(int amt)
//         {
//             balance=balance+amt;
//             cout<<"deposited amount is  : "<<amt<<endl;
//         }
//         void withdraw(int amt)
//         {
//             balance=balance-amt;
//             cout<<"withdrawn amount is  : "<<amt<<endl;
//         }
//         void check_balance()
//         {
//             cout<<"your final balance is  : "<<balance<<endl;
//         }
//         void show()
//         {
//             cout<<"account number is  : "<<accno<<endl;
//             cout<<"name is  : "<<name<<endl;
//         }
// };
// class sbi : public bank 
// {
//     public : 
//         void  modify_balance()
//         {
//             balance=50000;
//         }
//         void check_balance()
//         {
//             cout<<"your final balance is  : "<<balance<<endl;
//         }
// };

// int main()
// {
//     // bank b1; 
//     // b1.show();
//     // b1.deposit(10000); 
//     // b1.withdraw(5000);
//     // b1.check_balance();

//     sbi s1;
//     s1.show();
//     s1.modify_balance();
//     s1.deposit(10000);
//     s1.withdraw(5000);
//     s1.check_balance();
//     return 0;
// }

/*
inheritance :  to inherit properties and methods from a parent class to a child class.
*/

// single  inheritance : 

#include <iostream>
using namespace std;
class student
{
    public : 
        string name;
        int rollno; 
    student(string  n , int r )
    {
        name= n; 
        rollno=r;
    }
    void display()
    {
        cout<<"rollno  : "<<rollno<<endl;
        cout<<"name  : "<<name<<endl;
    }
}; 

class Marks : public student 
{
    public : 
        int marks[3];
    Marks(string  n , int r ,int m[]) : student(n,r)  // calling  constructor of  base class
    {
        for (int i =0 ; i<3; i++ )
        {
            marks[i] = m[i];
        }
    }
    void  display_marks()
    {
        cout<<"marks : "; 
        for(int i=0; i<3; i++)
        {
            cout<<marks[i]<<" ";
        }
    }
};
int main()
{
    int m[3]; 

    cout<<"enter marks : ";
    for(int i=0; i<3; i++)
    {
        cin>>m[i];
    }

    // creating  obj : 

    Marks m1("pinal",1234,m);

    m1.display();
    m1.display_marks();
    return 0; 
}