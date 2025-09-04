/*
pointer :  store  the address of a variable 

use : 
1. array  manipulation , string  manipulation

*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a =10; 
//     int  *p =&a;    // pointer decalration  
// //    p= &a;       // store the address of a in p , pointer intialized 

//     cout<<"value of a is : "<<a<<endl;  // 10 
//     cout<<"address of a is : "<<p<<endl;
//     cout<<"using  pointer a value is  : "<<*p<<endl;

//     return  0;

// }

// array with  pointer  : 
/*
    int a[5]={1,       2,  3,    4,     5}
//            a[0]  a[1] a[2]  a[3]  a[4]
    int  *p =a
*/

// #include <iostream>
// using namespace std;
// int main()
// {
    
//     int a[5]={1,2,3,4,5},i;
//     int  *p=a; 
// // *p[0] =1  *p[1] =2 
//     for(int i=0; i<5;i++)
//     {
//         cout<<*p+i<<endl;
//     }
//     cout<<"value of first element of array is  : "<<*p<<endl;
//     cout<<"value of second element of array is  : "<<*p +1<<endl;

//     //(p +1) =900 ; 
//     cout<<"value of first element of array is  : "<<*p<<endl;
//     cout<<"value of second element of array is  : "<<*p +1<<endl;
//     return  0;
    

//     // int a[50],num,i;
//     // int *p=a;
//     // cout<<"enter the number of elements in the array"<<endl;
//     // cin>>num;

//     // for(i=0; i<num; i++)
//     // {
//     //     cin>>*(p+i);
//     // }
//     // cout<<"array is : "<<endl;
//     // for(i=0; i<num; i++)
//     // {
//     //     cout<< *(p+i) <<endl;
//     // }
// }   


// pointer  to pinter  :  

// #include <iostream>
// using namespace std;
// int main ()
// {
//     int x=100; 
//     int *p=&x; 

//     int  **q = &p ; 

//     cout<<"value of x is "<<x<<endl;
//     cout<<"value of *p is "<<*p<<endl;
//     cout<<"value of **q is "<<**q<<endl;
//     return 0;
// }


// pointer with function  (pass by reference) :

// #include <iostream>
// using namespace std;

// void  updatevalue(int  *p)
// {
//     *p = *p +100; 
// }
// int main()
// {

//     int a =200; 
//     updatevalue(&a);
//     cout<<"value of a is  : "<<a<<endl;
//     return 0;
// }

/*
dynamic memory allocation  :
1. it is allocating memory at run time using  new() and releasing it using  delete().

*/

// dynamic array  allocation  : 

// #include <iostream>
// using namespace std;
// int main()
// {
//     int size ;
//     cout<<"enter the size : ";
//     cin>>size;

//     int *p = new int[size];   //dymanic array allocation

//     for(int i=0; i<size; i++)
//     {
//         cin>>p[i];
//     }
    
//     cout<<"array is : "<<endl;

//     for(int i=0; i<size; i++)
//     {
//         cout<<p[i]<<endl;
//     }
//     delete [] p;
//     return 0;//  array size [50]   =5  ==> 1,2,3,4,5  45  ==> 
// }


// malloc : 
// malloc ==> run time   +  it returns a void pointer to the first byte of the block. 

/*
syntax : 
void *malloc(size_t size);

*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    // int n ; 
    // cout<<"enter the size : ";
    // cin>>n;

    int  *p = (int*) malloc(3 *sizeof(int)) ;

    if (p ==nullptr)
    {
        cout<<"memory allocation failed"<<endl;
        return 0;
    }

    p[0]=12; 
    p[1]=34;
    p[2]=56;

    cout<<"values stored usinhg  malloc : "<<p[0]<<endl;
    cout<<"values stored usinhg  malloc : "<<p[1]<<endl;
    cout<<"values stored usinhg  malloc : "<<p[2]<<endl;

    // for(int i=0; i<n; i++)
    // {
    //     cin>>p[i];
    // }
    
    // cout<<"array is : "<<endl;

    // for(int i=0; i<n; i++)
    // {
    //     cout<<p[i]<<endl;
    // }
    free(p); // free allocated memory     
}