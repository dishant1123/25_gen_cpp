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

type   : 

1. default  constructor
2. parameterized constructor
3. non parameterized constructor
4. copy constructor
5. constructor overloading 

rules : 
1. class name  == constructor name  
*/
 
// ex :1  default constructor
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        student()
        {
            cout<<"my name is  ram and  live in jungle. ";
        }
};
int  main()
{
    student s1; 
    student s2; 

    return 0 ; 
}
*/ 
// ex :2  non parameterized constructor
/*
#include <iostream>
using namespace std;
class vehicle 
{
    public : 
        string model ;
        int  year;
    vehicle()
    {
        model = "bmw";
        year = 2020;
        cout<<"model is  : "<<model<<endl;
        cout<<"year is  : "<<year<<endl;
        cout<<"non parameterized constructor is called"<<endl;
    }
    // void  show()
    // {
    //     cout<<"model is : "<<model<<endl;
    //     cout<<"year is : "<<year<<endl;
    // }
};
int  main()
{
    vehicle v1; 
    // v1.show();
    return 0 ;     
}
*/ 
// ex :3  parameterized constructor
/*
#include <iostream>
using namespace std;
class vehicle
{
    public : 
        string model ;
        int  year;
    vehicle(string m ,int y)
    {
        model =m; 
        year = y;
        cout<<"parameterized constructor is called"<<endl;
    }
    void  show()
    {
        cout<<"model is : "<<model<<endl;
        cout<<"year is : "<<year<<endl;
    }
};
int  main()
{
    vehicle v1("bmw",2020);
    v1.show();
    cout<<"model is : "<<v1.model<<endl;
    cout<<"year is : "<<v1.year<<endl;

    return 0; 

}
*/ 

// copy constructor

/*
a = 90 
b=a 
cout << b; 

*/

#include <iostream>
using namespace std;
class student 
{
    public : 
        string name ;
        int  age;
    student(string n ,int a)
    {
        name =n;
        age = a;    //=== >   s1->show(); 
    } 
    student(const student &s)
    {
        name = s.name ; 
        age = s.age ;
    }

    void show()
    {
        cout<<"name is : "<<name<<endl;
        cout<<"age is : "<<age<<endl;
    }
};
int  main()
{
     student s1("ram",20); 
     student s2(s1); 

     s2.show(); 
     return 0 ; 

}
/*
a= 90 ; 
b=a ;
print(b); 
*/
