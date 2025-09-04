/*
do while  : 

syntax : 
do {
    cout <<
    inc/dec 
}
    while(con);
*/

/*
#include <iostream>
using namespace std;

int main()
{
    int i=1 ; 
    do{
        cout<<i<<endl;
        i++;
    }
    while (i<=100);
    return 0;
    
}
*/

/*
array  : 
index : 0   

1. 1 d array 
2. 2 d array
3. 3 d array / multidimensional array 

new : 
bubble sort , selection sort , insertion sort , merge sort : 
*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[5] = {1,  2,   3}; 
// //            a[0] a[1] a[2]  a[3] a[4]

//     cout<<a[0]<<endl;
//     cout<<a[1]<<endl;
//     cout<<a[2]<<endl;
//     cout<<a[3]<<endl;
//     cout<<a[4]<<endl;

//     return  0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[50],num,i; 
//     cout<<"enter the number of elements : ";
//     cin>>num; 

//     for(i=0; i<num; i++)
//     {
//         cin>>a[i];
//     }
//     cout<<"array element is  : \n";
//     for(i=0; i<num; i++)
//     {
//         cout<<a[i]<<"\n";
//     }
//     return 0;
// }

/*
task  :1 ask user to enter the  number of element in array  
    and sum of all element in array 

task : 2 ask user to enter the number of element in array  and  search the element and check if element is  in array or not .  if element present in array print the index of element

int  a[5] ={1,2,3,4,5}
enter the number  of element you want to search :2 
index : 1
*/

/*
1. insert 
2. update  : 
3. delete
4. duplicate 
*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[50],num,i,pos,ins;
//     cout<<"enter the number of elements"; 
//     cin>>num; 

//     for(i=0; i<num; i++)
//     {
//         cin>>a[i];
//     }
//     cout<<"array element  before insertionis  : \n";
//     for(i=0; i<num; i++)
//     {             
//         cout<<a[i]<<endl;  // {1,  2,   3      6      4    5   }; 
//             // //            a[0] a[1] a[2]  a[3]  a[4]  a[5]
//     }
//     cout<<"enter the element you want insert  :";
//     cin>>ins;  //6 
//     cout<<"enter the  position  / index where you want insert element  : ";
//     cin>>pos; //3 

//     for(i=num; i>pos; i--) //i=3  3  > 3 
//     {
//         a[i]=a[i-1];  // a[4]=a[3]
//     }
//     a[pos] =ins;  //    a[3]=6
//     num++;

//     cout<<"array element  after insert  : \n";
//     for(i=0; i<num; i++)
//     {
//         cout<<a[i]<<endl;
//     }
//     return 0;
// }

// update : 

#include <iostream>
using namespace std;
int main()
{
    int a[50],num,i,pos,ins;
    cout<<"enter the number of elements"; 
    cin>>num; 

    for(i=0; i<num; i++)
    {
        cin>>a[i];
    }
    cout<<"array element  before insertionis  : \n";
    for(i=0; i<num; i++)
    {             
        cout<<a[i]<<endl;  // {1,  2,   3     4    60  }; 
            // //            a[0] a[1] a[2]  a[3]  a[4] 
    }
    cout<<"enter the element you want update   :";
    cin>>ins;  //60 
    cout<<"enter the  position  / index where you want insert element  : ";
    cin>>pos; //4 

    a[pos] = ins;
   
    cout<<"array element  after insert  : \n";
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
