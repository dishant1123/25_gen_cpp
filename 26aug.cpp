/*
multiple  inheritance : 

class a 

class b 

class c : public a , public b

*/

#include <iostream>
using namespace std;
class student 
{
    private:
        string name;
        int rollno;
    public :  
    student(string name,int rollno)
    {
        this->name=name; 
        this->rollno=rollno;
    }
    // void show()
    // {
    //     cout<<"name : "<<name<<endl;
    //     cout<<"rollno : "<<rollno<<endl;
    // }

    string getname()
    {
        return name;
    }
    int getrollno()
    {
        return rollno;
    }
};
class teacher 
{
    private : 
        string t_name; 
        string subject; 
    public : 
    teacher(string t_n ,string s)
    {
        t_name=t_n; 
        subject=s;
    }
    void show1()
    {
        cout<<"teacher name : "<<t_name<<endl;
        cout<<"subject : "<<subject<<endl;
    }
};
class clg :public student ,public teacher 
{
    public : 
        int cgpa;
    
    clg(string name,int rollno,string t_n ,string s,int cgpa):student(name,rollno),teacher(t_n,s)
    {
        this->cgpa=cgpa;
    }
    void  show2()
    {
        cout<<"=====student information=====  :\n";
        cout<<"name : "<<getname()<<endl;
        cout<<"rollno : "<<getrollno()<<endl;
        cout<<"=====teacher information=====  :\n";
        show1();
        cout<<"cgpa : "<<cgpa<<endl;


    }
};
int main()
{
    clg c1("pinal",12,"prof.v.g.vaghmare","maths",9.5);
    c1.show2(); 
    return 0;
}

