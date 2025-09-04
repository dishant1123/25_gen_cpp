/*
cpp /c++ :

header file  : include<iostream> 
cpp ==>  object oriented programming language 

extention  : .cpp  
print ==> cout<< 
scanf ==> cin>>

formating  character : %d %f %c %s %ld ==> no formating character in c++

endl : new  line , \n ==> new line
*/

/*
#include<iostream>
using namespace std;
int main()
{
    cout<<"hello world.\n";
    cout<<"my name is malika"<<endl;
    return 0;
}
*/
/*
#include<iostream.h>  ==> header file
#include<conio.h>>
#include<stdio.h>
void main()
{

}
*/

/*
data type  : 
1. int  : pos or neg  
2.  float : decimal  value  
3.  char  / string  :  single  character  or string of characters 
4. long int  :  pos  or neg  , large value  limit : exceeding  32,767
5. double  :  decimal value 

operator  : 

1. airthematic operator  : + - * / %
2. comparison operator  : < > <= >= == !=
3. logical operator  : && || !
4. assignment operator  : = += -= *= /= %=
5. membership operator : not, in,  notin
6. bitwise operator : & | ^ ~ << >>
7. ternary  operator  :  ?
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int a; 
    float  b;
    char c; 
    char  d[50];
    long int e;
    double f;

    cout<<"Enter the value of a  int: ";
    cin>>a;
    cout<<"Enter the value of b  float: ";
    cin>>b;
    cout<<"Enter the value of c  character: ";
    cin>>c;
    cout<<"Enter the value of d  string: ";
    cin>>d;
    cout<<"Enter the value of e long int: ";
    cin>>e;
    cout<<"Enter the value of f  int: ";
    cin>>f;


    cout<<"value of a is : "<<a<<endl;
    cout<<"value of b is : "<<b<<endl;
    cout<<"value of c is : "<<c<<endl;
    cout<<"value of d is : "<<d<<endl;
    cout<<"value of e is : "<<e<<endl;
    cout<<"value of f is : "<<f<<endl;

    return 0;
}
*/

// conditional  statement  : if else 
/*
if  (con)
{
    cout<<
}
    else 
{
    cout<<
}
*/
#include<iostream>
using namespace std;
int main()
{
        int a,b;
        cout<<"Enter the value of a: ";
        cin>>a;
        cout<<"Enter the value of b: ";
        cin>>b;

        if  (a>b)
            cout<<"a is  big"<<endl;
        else 
            cout<<"b is big"<<endl;
    return 0;
}