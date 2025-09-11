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

// operator overlaoding  : 

/*
#include <iostream>
using namespace std;
class calculator
{
    public :
        int a ; 
        
    calculator(int a=0)
    {
        this->a=a;
    }

    calculator operator+(const calculator &c)
    {
        return calculator(a + c.a);
    }
    calculator operator-(const calculator &c)
    {
        return calculator(a - c.a);
    }
      calculator operator*(const calculator &c)
    {
        return calculator(a * c.a);
    }
    void show()
    {
        cout<<"value of a is : "<<a<<endl;
    }
};
int main()
{
    calculator c1(100), c2(200);
    
    calculator sum=c1+c2; 
    calculator diff=c1-c2;
    calculator mul=c1*c2;

    cout<<"value of sum : ";sum.show();
    cout<<"value of diff : ";diff.show();
    cout<<"value of mul : ";mul.show();
    return  0; 
}
*/

// run-time  polymorphism 
/*
==>virtual  function : it is  function in the  base class that you expect to  be overridden  in the derived class. 
define  ==>  virtual  
==>when  you call virtual function  though a base class pointer/ reference the derived  class version  is executed.(if it is  exists). 

==>run time polymorphism 

*/
#include <iostream>
using namespace std;
class animal
{
    public : 
        virtual void sound()
        {
            cout<<"animal sound"<<endl;
        }
};
class cat : public animal 
{
    public : 
        void  sound() override
        {
            cout<<"cat sound ==> meoowwww mew"<<endl;
        }
};
class dog : public animal 
{
    public :
        void  sound() override 
        {
            cout<<"dog sound ==>bhowwww bhowwww"<<endl;
        }
};
int main()
{
    animal* a1;
    
    dog d1; 
    cat c1; 

    a1= &c1;    //cat 
    a1->sound(); 

    a1 =&d1;    // dog 
    a1->sound();

    return 0;
}

/*

int a =10 ; 
int *p =&a; // pointer decalration  with  intialization  
*/
