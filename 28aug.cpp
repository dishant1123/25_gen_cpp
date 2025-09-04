/*
friend function  : 

access private and  protected member of outside class. 


multi  level  inheritance : 

class a 

class b(a) 

class c(b)
*/

#include <iostream>
using namespace std;
class person 
{
    protected: 
        string name ;
        int age; 
    public : 
        person(string name,int age)
        {
            this->name=name;
            this->age=age;
        }
};
class student :public person 
{
    protected : 
        int rollno; 
    public : 
        student(string name,int age, int rollno): person(name,age)  // base class constructor call
        {
            this->rollno=rollno;
        }
};
class result : public student 
{
    private : 
        int marks [3]; 
        int total; 
        float percentage;

    public : 
        result(string name,int age,int rollno,int m1,int m2,int m3):student(name,age,rollno)
        {
            marks[0]=m1;
            marks[1]=m2;
            marks[2]=m3;
            total=m1+m2+m3;
            percentage=total /3;
        }
        friend void show(result r); 
};
void  show(result r)
{
    cout<<"========student details =======\n";
    cout<<"name : "<<r.name<<endl;
    cout<<"age : "<<r.age<<endl;
    cout<<"rollno : "<<r.rollno<<endl;
    cout<<"========result details =======\n";
    cout<<r.marks[0]<<" "<<r.marks[1]<<" "<<r.marks[2]<<endl;
    cout<<"total : "<<r.total<<endl;
    cout<<"percentage : "<<r.percentage<<endl;
}
int main()
{
    int n;
    cout<<"enter the number of students : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string name;
        int age,rollno,m1,m2,m3;
        cout<<"enter the name : ";
        cin>>name;
        cout<<"enter the age : ";
        cin>>age;
        cout<<"enter the rollno : ";
        cin>>rollno;
        cout<<"enter the marks : ";
        cin>>m1;
        cin>>m2;
        cin>>m3;
        result r(name,age,rollno,m1,m2,m3);
        show(r);
    }
    return 0;
}

