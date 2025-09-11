/*
polymorphism  : many forms  

1.compile time  : 
    a . function  overloading  
    b . operator  overloading  

2. run - time  
    a. over riding  ==> vitual function 
*/

// compile time  function  overloading:

/*
#include <iostream>
using namespace std;
class calculator 
{
    public : 
        int add(int a,int b)
        {
            return a+b; 
        }
        double add(double a,double b,double c)
        {
            return a+b+c; 
        }
        int add(int a ,int b ,int c ,int d)
        {
            return a+b+c+d;
        }
};
int main()
{
    calculator c; 
    cout<<"addition   of two number : "<<c.add(1,2)<<endl;
    cout<<"addition   of three number : "<<c.add(1,2,3)<<endl;
    cout<<"addition   of four number : "<<c.add(1,2,3,4)<<endl;

    return 0; 
}
*/

// contructor  overloading  :  default  , parameter  ,  non parameter ,copy constructor
