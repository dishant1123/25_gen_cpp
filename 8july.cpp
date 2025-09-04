/*
if (con)
{
    cout<<
}
    else if (con)
{
    cout 
    }
    else 
{
    }
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int  a,b,c;
    cout<<"enter the value of a :"<<endl;
    cin>>a;
    cout<<"enter the value of b :"<<endl;
    cin>>b;
    cout<<"enter the value of c:"<<endl;
    cin>>c;
    if (a>b && a>c)
    {
        cout<<"a is the biggest"<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<"b is the biggest"<<endl;
    }
    else if(c>a && c>b)
    {
        cout<<"c is the biggest"<<endl;
    }
    else 
    {
        cout<<"all are the same"<<endl;
    }
    return 0;
}
*/
/*
a=10 b =20 c =30  big num  =30 middle  num =20  small num =10 
a=10 b=10 c=20  big num 20  middle num 10 small num 10
*/

#include <iostream>
using namespace std;
int main()
{

    long int  num,i,temp,r,fact,sum=0; 
    cout<<"enter the value of number : "<<"\t";
    cin>>num; 
    temp =num;    // temp 145 
    for(; temp >0;)  // 14 >0 
    {
        r = temp %10;  //145 %10 = 5
        fact =1;   // 1 
        for(i=1; i<=r; i++)  // 1  1 <=5  
        {
            fact= fact *i;  //fact =120 
        }
        temp = temp /10; // temp = 145 /10 =14 
        sum =sum +fact;  // sum = 0 +120 =120 
    }
    if (sum ==num)
    {
            cout<<"the number is strong"<<endl;
    }
    return 0;
}

/*
for   ==> entry  control loop
while  ==> exit  control loop
do while ==> exit cont loop  

prime  perfect amg  rev pelindrome twin strong number   

strong  number  : 145 
each digit  factorial : 1 = 1  , 4 ! = 24 5 ! =120 
                        sum = 1+24+120 =145 
*/
