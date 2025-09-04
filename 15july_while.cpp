/*

while  : 

syntax : while (con ):
        cout<<
        inc/dec 

strong number  using while  : 
*/
// #include <iostream>
// #include<math.h>
// using namespace std;

// int main()
// {
//     int num, temp,sum=0,count=0,r;
//     cout<<"enter the  number  : ";
//     cin>>num; 
//     temp =num; 
//     while(temp >0)
//     {
//         temp = temp /10;
//         count++;
//     }
//     temp =num; 
//     while(temp >0)
//     {
//         r=  temp %10; 
//         sum  =sum + pow(r,count);
//         temp = temp /10;
//     }
//     if (sum == num)
//     {
//         cout<<"armstrong number";
//     }
//     return  0;
// }

// #include <iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int start,end,temp,sum,count,r;
//     cout<<"enter the  starting number  : ";
//     cin>>start;
//     cout<<"enter the  ending number  : ";
//     cin>>end;

//     int i=start;

//     while(i<=end)
//     {
//         count=0;
//         temp =i;
//         while (temp >0)
//         {
//             temp = temp /10;
//             count++;
//         }
//         temp =i;
//         sum=0;
//         while (temp >0)
//         {
//             r=  temp %10;
//             sum  =sum + pow(r,count);
//             temp = temp /10;
//         }
//         if(sum==i)
//         {
//             cout<<i<<endl;
//         }
//         i++;
//     }
//     return 0;
// }

/*
 *                           *        *               *
  * * * *     * * * *      * *       * *             * *
    * * *      * * *     * * *      * * *           *   *
      * *       * *    * * * *     * * * *         *     *
        *        *   * * * * *    * * * * *       *       *
                                   * * * *         *     *
                                    * * *           *   *
                                     * *             * *
                                      *               *
*/

#include <iostream>
using namespace std;
int main() 
{
    int i=1,j,k;
    while(i<=4)
    {
        k=5;
        while(k>=i)
        {
            cout<<" ";
            k--;
        }
        j=1;
        while(j<=i)
        {
            cout<<"* ";
            j++;
        }
        i++;
        cout<<endl;

    }
    i=1;
    while(i<=5)
    {
        k=1;
        while(k<=i)
        {
            cout<<" ";
            k++;
        }
        j=5;
        while(j>=i)
        {
            cout<<"* ";
            j--;
        }
        i++;
        cout<<endl;

    }
    return  0;
}
