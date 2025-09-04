/*
dynamic  memory allocation  : 

during runtime using special operators or function . 
where memory is allocated during cimplie  time. 

use : 
when  you don't  know the size  of an array or  object at complie -time. 
to allocate memory  as needed and free it when done making programs more memory efficient.

operator

new  :  allocates memory for an object of a class.
delete :  frees memory allocated by new.
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int size; 
    cout<<"enter the numbers of elements :";
    cin>>size;
    
    //dynamically allocate memory for array of intergers
    int *a = new int[size];

    cout<<"enter"<<size<<" elements :\n";
    for (int i = 0; i < size; i++)
    {
            cin>>a[i];// to store values in dynamically allocated memory
    }
    cout<<"array is  : \n";

    for(int i=0; i<size; i++)
    {
        cout<<a[i]<<" ";
    }
    // free the dynamically allocated memory
    delete[] a; 

    return 0;
}
*/

/*

int a[50]; 
int  num      [1,2,3,4,5]

*/

/*

class object : 

class ==> blue  print  object 
object :  instance of  class . 


class 3  : 
1.  public :  access any where 
2.  private : access only  within the class 
3.  protected :access only within the class and its derived classes

*/

// #include <iostream>
// using namespace std;
// class student
// {
//     public:
//         void show()
//         {
//             cout<<"public class  method"<<endl;
//         }
// };
// int main()
// {
//     student s1;  // class name  object name
//     s1.show();  // s1 object name ==> method   call  ==> show() 
//     return 0;
// }

//data member : 

// #include <iostream>
// using namespace std;
// class student
// {
//     public:
//         int rollno =1;   // rollno , name ==> data member  ==>class 
//         string name="pinal";
//     void show()
//     {
//         cout<<"rollno is  : "<<rollno<<endl;
//         cout<<"name is  : "<<name<<endl;
//     } 
// };
// int main()
// {
//     student s1;  // class name  object name
//     s1.show();//function 
//     cout<<"rollno is  "<<s1.rollno<<endl;
//     cout<<"name is  "<<s1.name<<endl;
//     return 0;
// }


// bank  : 
#include <iostream>
using namespace std;
class bank
{
    public:
        int accno =11234;   // rollno , name ==> data member  ==>class 
        string name="pinal";
        int balance =25000;
    
    void depsoit(int amt)
    {
        balance=balance+amt;
        cout<<"deposited amount is  : "<<amt<<endl;
    }
    void withdraw(int amt)
    {
        if (balance -amt >=10000)
        {
            balance=balance-amt;
            cout<<"withdrawn amount is  : "<<amt<<endl;
        }
        else 
        {
            cout<<"min balance  require 10000 ."<<endl;
        }
    }
    void check_balance()
    {
        cout<<"your final balance is  : "<<balance<<endl;
    }
    void show()
    {
        cout<<"account number is  : "<<accno<<endl;
        cout<<"name is  : "<<name<<endl;
        cout<<"balance is  : "<<balance<<endl;
    }
};
int main()
{
    bank b1;  // class name  object name
    b1.show();

    b1.depsoit(10000); 
    b1.withdraw(5000); 
    b1.check_balance();
    return 0;
}
