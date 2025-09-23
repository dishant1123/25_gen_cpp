/*
fstream  ==> 

file write  ==>ofstream  
file read ==>  ifstream 
file  append  ==>  ios::app 

file handling with oop  : 
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class student
{
    private : 
        int rollno; 
        string name; 
        float marks; 
    public : 
        student()
        {}
        student(int rollno,string name,float marks)
        {
            this->rollno=rollno;
            this->name=name;
            this->marks=marks;
        }
    void input() // student data collect  
    {
        cout<<"enter rollno : "<<endl;
        cin>>rollno;
        cin.ignore(); //new line character ignore 
        cout<<"enter name : "<<endl;
        getline(cin,name);
        cout<<"enter marks : "<<endl;
        cin>>marks;
    }
    void display() // student data display
    {
        cout<<"rollno : \t"<<rollno<<endl;
        cout<<"name : \t"<<name<<endl;
        cout<<"marks : \t"<<marks<<endl;
    }
    void writetofile()
    {
        ofstream fout("student.txt",ios::app);
        fout<<"rollno\tname\tmarks\t"<<endl;
        fout<<rollno<<"\t"<<name<<"\t"<<marks<<endl;
        fout.close();
    }
    void readfromfile()
    {
        ifstream fin("student.txt");
        string  s1; 
        cout<<"==========STUDENT INFORMATION==========="<<endl;
        while(getline(fin,s1))
        {
            cout<<s1<<endl;
        }
        fin.close();
    }
};
int main()
{
    student s1;
    char ch; 

    do{
        s1.input();
        s1.writetofile();

        cout<<"do you want  to add another student(y/n) : "<<endl;
        cin>>ch; 

    }
    while(ch=='y');
    s1.readfromfile();
    return 0; 
}
/*
class object 
4  pillar :  inheritance polymorphism abstarction encapsulation

friend  function  
virtual  function
pure virtual function 

=====> 

file handling  
with  oop 
*/

/*

bank  : 

1. deposit  
2. withdraw
3. check balance 

bank.txt 

                        STATE BANK OF INDIA
DATE : 20-09-2020                           ACC.HOLDER :PINAL PATEL 
BRANCH : AHMEDABAD                          PAN NO : AVKSP8952N

DATE/TIME            AMOUNT         DR          CR         BALANCE 
20-9-2025                                                    25000
20-9-2025            10000                     10000         35000 
20-9-2025            15000         15000                     20000

#include<time.h>
*/