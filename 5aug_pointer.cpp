/*
pointer  : 

use ==> array  manipulation , string  manipulation
*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int x=10; 
//     int *p=&x;  // memory address of x 
//     //int  *p; 
//     //p=&x;

//     cout<<"value of x is "<<x<<endl;  // 10 
//     cout<<"address of  x is  :"<<p<<endl;
//     cout<<"using  pointer  to access the value of x"<<*p<<endl;
//     return 0;
// }


// array with pointer : 

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[5]={1,2,3,4,5},i; 
//     //        a[0]  a[1]  a[2]  a[3]  a[4]
//     int *p=a;

//     for(i=0; i<5; i++)
//     {
//         cout<<*p +i<<endl;
//     }
//     return 0;

// }


// pointer to pointer :

// #include <iostream>
// using namespace std;
// int main()
// {
//     int x =100; 
//     int *p = &x;
//     int **pp = &p;

//     cout<<"value of x is "<<x<<endl; 
//     cout<<"value  using pointer to access the value of x is "<<*p<<endl;
//     cout<<"value using double  pointer **pp :"<<**pp<<endl;
//     return 0;
// }


// pointer with function (pass by reference) : 

// #include <iostream>
// using namespace std;
// void value(int  *p)
// {
//     *p = *p +100;
// }
// int main()
// {
//     int a =200; 
//     value(&a);

//     cout<<"value of a is "<<a<<endl;
//     return 0;
// }


/*
malloc : memory allocation  : 
function  ==> cstdlib
it allocats memory at runtime and returns a void  pointer to the first byte of the block.

syntax : 

void *malloc(size_t size);
*/
// single integer allocation  : 

// #include <iostream>
// #include <cstdlib>
// using namespace std;
// int main()
// {
//      int *ptr= (int*)malloc(sizeof(int));  // allocate memory  for  1 integer 

//     if (ptr==NULL)
//     {
//         cout<<"memory allocation failed"<<endl;
//         return 0;
//     }
//     *ptr =100; 
//     cout<<"value of *ptr is "<<*ptr<<endl;

//     free(ptr); // free the memory
//     return  0;
// }

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
     int *ptr= (int*)malloc(3 * sizeof(int));  // allocate memory  for  1 integer 

    if (ptr==NULL)
    {
        cout<<"memory allocation failed"<<endl;
        return 0;
    }
    ptr[0] =100; 
    ptr[1] =200; 
    ptr[2] =300;

    cout<<"values stored suing  malloc : "<<endl; 
    cout<<ptr[0]<<endl;
    cout<<ptr[1]<<endl;
    cout<<ptr[2]<<endl;

    // free(ptr); // free the memory
    return  0;
}
