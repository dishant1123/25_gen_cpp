/*
pattern  : 

* * * * *    * * * * *       *        *               0
  * * * *     * * * *      * *       * *            1 0 1
    * * *      * * *     * * *      * * *         2 1 0 1 2
      * *       * *    * * * *     * * * *      3 2 1 0 1 2 3
        *        *   * * * * *    * * * * *   4 3 2 1 0 1 2 3 4
                                            5 4 3 2 1 0 1 2 3 4 5
*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i,j,k;

//     for (i=1;i<=5;i++)
//     {
//         for(k=1; k<i; k++)
//         {
//             cout<<" ";
//         }
//         for (j=5; j>=i;j--)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i,j,k;
//     for (i=1;i<=5;i++)
//     {
//         for(k=5; k>i; k--)
//         {
//             cout<<" ";
//         }
//         for (j=1; j<=i;j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    for (int i=0; i<=4; i++) {
        
        for (int k=0; k<(4-i-1) ;k++) {
            cout<<"  ";
        }

        for (int j = i; j>= 1;j--) {
            cout<< j<<" ";
        }

        for (int j=0;j<=i;j++) {
            cout<<j<<" ";
        }
        cout << endl;
    }
    return 0;
}