/*
sorting  : 

1. bubble sort   : 

int a[5] = {65,77,1,3,2}
65 ==>77    77 ==> 65 
65 ==>1 
65 ==> 3
65 ==> 2

2. selection sort : 
int a[5] = {65,77,1,3,2}
min  = 1   2 
1==>65    
1==>77
1==>3
1==>2

*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a[50],num,i,j,temp;
//     cout<<"enter the number of elements";
//     cin>>num;
//     for (i=0;i<num; i++)
//     {
//         cin>>a[i];
//     }
//     cout<<"array element before sorting is : \n";
//     for (i=0;i<num; i++)
//     {
//         cout<<a[i]<<"\n";
//     }
//     for (i = 0; i <num; i++)
//     {
//         for (j = i+1; j <num; j++)
//         {
//             if(a[i] >a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     cout<<"array element after sorting is : \n";
//     for (i=0;i<num; i++)
//     {
//         cout<<a[i]<<"\n";
//     }
//     return 0;



// selection sort : 

#include <iostream>
using namespace std;

int main()
{
    int a[50],num,i,j,temp,minindex;
    cout<<"enter the number of elements";
    cin>>num;
    for (i=0;i<num; i++)
    {
        cin>>a[i];
    }
    cout<<"array element before sorting is : \n";
    for (i=0;i<num; i++)
    {                      //      a[0] a[1] a[2]  a[3] a[4]
        cout<<a[i]<<"\n";  // a[5]={65,  77,   1,    3,   2}
    }
    for (i = 0; i <num; i++) // 1  1 < 5 
    {
        minindex = i;   //  minindex = 1
        for(j=i+1; j<num; j++)  //j=2  2  <5
        {
            if(a[j] < a[minindex])  // a[2] < a[0]   1 < 65
            {
                minindex=j;  // minindex =2 
            }
        }
        temp =a[i];   //  temp =65 
        a[i] =a[minindex];  // a[0] =a[2]
        a[minindex] = temp;  // a[2]  = 65 
    }
    cout<<"array element after sorting is : \n";
    for (i=0;i<num; i++)
    {
        cout<<a[i]<<"\n";
    }
    return 0;
}