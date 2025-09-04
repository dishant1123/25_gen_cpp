/*
int a[3][3] ==> 2d array : 

3*3 : 
1 2 3 
4 5 6
7 8 9

*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[3][3],i,j;
//     cout<<"enter the elements of the matrix";

//     for(i=0;i<3;i++)
//     {
//         for(j=0; j<3;j++)
//         {
//             cin>>a[i][j];
//         }
//     }
//     cout<<"3 * 3 matrix is : \n";
//     for(i=0;i<3;i++)
//     {
//         for(j=0; j<3;j++)
//         {
//             cout<<a[i][j]<<" ";
//         }
//         cout<<"\n";
//     }

//     return 0;
// }

/*
         r c
1 2 3   (0,0)1 (0,1)2 (0,2)3
4 5 6   (1,0)4 (1,1)5 (1,2)6
7 8 9   (2,0)7 (2,1)8 (2,2)9

lower tringular matrix : 
1 0 0
4 5 0
7 8 9   if c>r   ==> 0  ==> lower  trin 
upper  tringular matrix :

1 2 3 
0 5 6 
0 0 9    if r >c  ==> 0  ==> upper  trin
*/

#include <iostream>
using namespace std;
int main()
{
    int a[3][3],i,j,islower=true,isupper=true;
    cout<<"enter the elements of the matrix";

    for(i=0;i<3;i++)
    {
        for(j=0; j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"3 * 3 matrix is : \n";
    for(i=0;i<3;i++)
    {
        for(j=0; j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(i=0;i<3;i++)
    {
        for(j=0; j<3;j++)
        {
            if(j >i && a[i][j] !=0)
            {
                islower=false;
            }
            if (i>j && a[i][j] !=0)
            {
                isupper = false;
            }
        }
    }
    if(islower)
    {
        cout<<"lower tringular matrix is : \n";
    }
    else if (isupper)
    {
        cout<<"upper tringular matrix is : \n";
    }
    else 
    {
        cout<<"neither lower nor upper tringular matrix is : \n";
    }
}

/*
symmetric matrix : 

original matrix : 
  1        2 
1 2 3     1 2 3
4 5 6     2 3 4
7 8 9     3 4 5

tranpose matrix :
  1        2 
1 4 7      1 2 3 
2 5 8      2 3 4
3 6 9      3 4 5 

*/