/*
structure  : 
multiple  data type  store  

ex : 
(int)    (char)   (int)
rollno  name   marks 
1       john   90
2       tom    80
3       jack   70
*/

#include <iostream>
using namespace std;
struct student 
{
    int rollno,marks; 
    char name[90];
};
void scan(int size,student s[])
{
    int i;
    for(i=0; i<size; i++)
    {
        cout<<"enter the "<<i+1<<" student rollno"<<endl;
        cin>>s[i].rollno;
        cout<<"enter the "<<i+1<<" student name"<<endl;
        cin>>s[i].name;
        cout<<"enter the "<<i+1<<" student marks"<<endl;
        cin>>s[i].marks;
    }
}
void display(int size,student s[])
{
    int i;
    cout<<"rollno\tname\tmarks\t\n"; 
    for(i=0; i<3; i++)
    {
        cout<<s[i].rollno<<"\t"<<s[i].name<<"\t"<<s[i].marks<<"\n";
    }
}
int main()
{
    struct student s[50];
    int size;
    cout<<"enter the number of students"<<endl;
    cin>>size;

    scan(size,s);
    display(size,s);

    return  0;
}
