/*
constructor  : when  you create  constuctor  automatically call. 

note: class name  same as constructor name .
type : 

1. default constructor
2. parameterized constructor
3. non parameterized constructor
4. copy constructor

==> this -> keyword 
*/

// 1. default constructor  : 

// #include <iostream>
// using namespace std;
// class student   // class student 
// {
//     public : 
//     student()   // constuctor  ==> 
//     {
//         cout<<"default constructor called"<<endl;
//         cout<<"my name is moksha"<<endl;
//     }
// };

// int main()
// {
//     student s1;
//     return 0;
// }


// 2. parameterized constructor  :

// #include <iostream>
// using namespace std;
// class student 
// {
//     public : 
//         int age;
//         string name; 
    
//     student(int a ,string n) // parameterized constructor
//     {
//         age=a;
//         name=n;
//     }
//     void show()
//     {
//         cout<<"age  : "<<age<<endl;
//         cout<<"name  : "<<name<<endl;
//     }
// };
// int main()
// {
//     student s1(21,"moksh");
//     s1.show();
//     return 0;
// }

// 3 .non parameterized constructor  :
// #include <iostream>
// using namespace std;
// class student 
// {
//     public : 
//         int age;
//         string name; 
    
//     student() 
//     {
//         age=21;
//         name="moksh";
//     }
//     void show()
//     {
//         cout<<"age  : "<<age<<endl;
//         cout<<"name  : "<<name<<endl;
//     }
// };
// int main()
// {
//     student s1;
//     s1.show();
//     return 0;
// }

// this  operator  : 

// #include <iostream>
// using namespace std;
// class student 
// {
//     public : 
//         int age;
//         string name; 
    
//     student(int age ,string name) // parameterized constructor
//     {
//         this->age=age;
//         this->name=name;
//     }
//     void show()
//     {
//         cout<<"age  : "<<age<<endl;
//         cout<<"name  : "<<name<<endl;
//     }
// };
// int main()
// {
//     student s1(21,"moksh");
//     s1.show();
//     return  0;
// }

// 4. copy constructor  :

// #include <iostream>
// using namespace std;
// class student
// {
//     public : 
//         int age;
//         string name;
    
//     student(string n , int a )
//     {
//         name =n; 
//         age =a;
//     }
//     //copy constructor 

//     student(const student &s1)
//     {
//         name =s1.name; 
//         age =s1.age; 
//     }
//     void show()
//     {
//         cout<<"age  : "<<age<<endl;
//         cout<<"name  : "<<name<<endl;
//     }
// };

// int main()
// {
//     student  s1("pinal",21); 

//     student s2 =s1;  // copy constructor
//     s1.show();
//     s2.show();
//     // cout<<"name is  : "<<s1.name<<endl;
//     // cout<<"age is  : "<<s1.age<<endl;

//     // cout<<"name is  : "<<s2.name<<endl;
//     // cout<<"age is  : "<<s2.age<<endl;

//     return 0;
// }


// 5 .constructor  over loading  : 

#include <iostream>
using namespace std;
class student
{
    public : 
        int age;
        string name;
    
    student()
    {
        name="moksh";   // default constructor
        age =0; 
    }

    student(string n)
    {
        name =n;     //  parameterized constructor  1 arg 
    }

    student(int  age ,string name)
    {
        this->age=age;       // parameterized constructor  2 arg 
        this->name=name;
    }
    void  show()
    {
        cout<<"age  : "<<age<<endl;
        cout<<"name  : "<<name<<endl;
    }
};
int main()
{
    student s1;   
    student s2("pinal"); 
    student s3(21,"moksh");

    s1.show(); // default  constructor
    s2.show(); // 1 arg constructor
    s3.show(); // 2 arg  constructor

    return 0;

}