/*
funcation  : 

cpp ==> friend  function   ==> 

1. no arg  no return  
2. no arg  with  return
3. with arg  no return
4. with arg  with return

*/
//1 . no arg no return 
// #include <iostream>
// using namespace std;
// void sum()
// {
//     int a,b,c;
//     cout<<"enter the three numbers";
//     cin>>a>>b;
//     c=a+b;
//     cout<<"the sum of the three numbers is : "<<c;
// }
// int main()
// {
//     sum();
//     return 0;
// }

//2 with arg no return :
// #include <iostream>
// using namespace std;
// void sum(int a, int b)
// {
//     int c;
//     c=a+b;
//     cout<<"the sum of the three numbers is : "<<c;
// }
// int main()
// {
//     int a,b;
//     cout<<"enter the two numbers";
//     cin>>a>>b;
//     sum(a,b);
//     return 0;
// }

// 3 .no arg with return : 

// #include <iostream>
// using namespace std;
// int sum()
// {
//     int c;
//     int a,b;
//     cout<<"enter the two numbers";
//     cin>>a>>b;
   
//     c=a+b;
//     return c;
// }
// int main()
// {
 
//     cout<<"sum of two number is  : "<<sum();
//     return 0;
// }
 

//4 . with arg with return :

// #include <iostream>
// using namespace std;

// int sum(int a, int b)
// {
//     int c;
   
//     c=a+b;
//     return c;
// }
// int main()
// {
//     int a,b;
//     cout<<"enter the two numbers";
//     cin>>a>>b;

//     cout<<"sum of two number is  : "<<sum(a,b);
//     return 0;
// }

/*
employees management  system  : 

1. add  employee
2. delete employee
3. update employee
4. search employee
5. display employee
6. exit

array  : 
*/

#include <iostream>
using namespace std;

const int SIZE=100;
int emp_id[SIZE];
string emp_name[SIZE];
int emp_salary[SIZE];
int count_emp=0;

void add()
{
    if (count_emp<SIZE)
    {
        cout<<"enter the employee id : ";
        cin>>emp_id[count_emp];
        cout<<"enter the employee name : ";
        cin>>emp_name[count_emp];
        cout<<"enter the employee salary : ";
        cin>>emp_salary[count_emp];
        count_emp++;
    }
    else 
    {
        cout<<"the array is full\n";
    }
}
void update()
{
    int id,found=0;
    cout<<"enter  the employee id to be updated : ";
    cin>>id;
    for(int i=0;i<count_emp;i++)
    {
        if (id ==emp_id[i])
        {
            cout<<"enter the new employee name: ";
            cin>>emp_name[i];
            cout<<"enter the new employee salary: ";
            cin>>emp_salary[i];
            found=1;
            cout<<"the employee is updated\n";
            break;
        }
    }
    if(!found)
    {
        cout<<"the employee is not found\n";
    }
}
void delete_emp()
{

}
void search()
{
    int id,found=0;
    cout<<"enter the employee id to be searched : ";
    cin>>id;
    for(int i=0;i<count_emp;i++)
    {
        if(emp_id[i] ==id)
        {
            cout<<"id :"<<emp_id[i]<<"\n";
            cout<<"name :"<<emp_name[i]<<"\n";
            cout<<"salary :"<<emp_salary[i]<<"\n";
            found=1;
            break;
        }
    }
    if (!found)
    {
        cout<<"the employee is not found\n";
    }
}
void display()
{

}
int main()
{
    int choice;
    do
    {
            cout<<"EMPLOYEE MANAGEMENT SYSTEM\n";
            cout<<"1. add employee\n";
            cout<<"2. delete employee\n";
            cout<<"3. update employee\n";
            cout<<"4. search employee\n";
            cout<<"5. display employee\n";
            cout<<"6. exit\n";
            cout<<"enter your choice : ";
            cin>>choice;
            switch(choice)
            {
                case 1:
                    add();
                    break;
                case 2:
                    delete_emp();
                    break;
                case 3:
                    update();
                    break;
                case 4:
                    search();
                    break;
                case 5:
                    display();
                    break;
                default:
                    cout<<"invalid choice\n";
                    break;

            } 
    
    }
    while (choice !=6);

}
/*

id name  salary 
1  het    90000 
2  moksh  80000
3  darsh  89000
4  marmik 87000

display()  == >4 

delete :1 

display() ==>3 
update ==>3
search ==>3

*/