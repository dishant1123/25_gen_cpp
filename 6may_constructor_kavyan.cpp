/*
public :  access any where 
private  : with  class only  
protected : with the class and  inherited 
*/

// ex :1 
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        string name="ram"; 
        int  age=56;
    void show()
    {
        cout<<"name is : "<<name<<endl;
        cout<<"age is : "<<age<<endl;
    } 
};
int main()
{   
    student s1; 
    s1.show(); 
    cout<<"name is  : "<<s1.name<<endl;
    cout<<"age is  : "<<s1.age<<endl;

    s1.name = "ramesh";
    s1.age = 51;

    s1.show(); 
    return 0; 
}
*/ 

// ex :2 

/*
#include <iostream>
using namespace std;
class student 
{
    private : 
        int age =12; 
        string name="ram";
    // public : 
        void show()
        {
            cout<<"name is : "<<name<<endl;
            cout<<"age is : "<<age<<endl;
        }
    public : 
        void  dispaly()
        {
            show(); 
        }
};

int  main()
{
    student s1; 
    // cout<<"name is : "<<s1.name<<endl; // within  the class only  not access though object. 
    // cout<<"age is : "<<s1.age<<endl;
    s1.dispaly(); 

    return 0 ; 
}

*/ 

// ex :3 protected
/*
#include <iostream>
using namespace std;
class student 
{
    protected : 
        int age =12;
        string name="ram";

};
class clg : public student 
{
    public  : 
        void  show()
        {
            cout<<"name is : "<<name<<endl;
            cout<<"age is : "<<age<<endl;
        }
};
int  main()
{
    clg c1;
    c1.show();  
    return 0 ; 
}
*/ 

// constructor : 
/*
    1. no return  type  
    2. automatically called  when  object  is  created. 
*/
