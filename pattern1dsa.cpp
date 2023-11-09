#include <iostream>
using namespace std;

// void print1(int n){
//     for (int i =0; i <n; i++){
//         for (int j=0; j < n; j++ )
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// int main(){
//     int t;
//     cin>>t;
//     for (int i = 0;i<t; t++){
//         int n;
//         cin>>n;
//         print1(n);
//     }
// }

// output 2
//  * *
//  * *
//  5
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
//  4
//  * * * *
//  * * * *
//  * * * *
//  * * * *

// Print for pattern
/*
 *
 * *
 * * *
 * * * *
 * * * * *
 */

void print2(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

// int main(){

//     int t;
//     cin>>t;
//     for (int i = 0;i<t; t++){
//         int n;
//         cin>>n;
//         print3(n);
//     }
// }

/*
print for pattern
1
12
123
1234
12345
*/

/*void print3(int n){

    for (int i =1; i <=n; i++){
        for (int j=1; j <= i; j++ )
        {
            cout << j <<" ";
        }

        cout << endl;
    }

}
int main(){

    int t;
    cin>>t;
    for (int i = 0;i<t; t++){
        int n;
        cin>>n;
        print3(n);
    }
}

/*
print for pattern
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

// void print4(int n){
//     for (int i =1; i <=n; i++){
//         for (int j=1; j <= i; j++ )
//         {
//             cout << i <<" ";
//         }
//         cout << endl;
//     }

// }
// int main(){
//     int t;
//     cin>>t;
//     for (int i = 0;i<t; t++){
//         int n;
//         cin>>n;
//         print4(n);
//     }
// }

// void print5(int n){

//     for (int i =1; i <=n; i++){
//         for (int j=0; j<n-i+1; j++ )
//         {
//             cout << "* ";
//         }

//         cout << endl;
//     }

// }
// int main(){
//     int t;
//     cin>>t;
//     for (int i = 0;i<t; t++){
//         int n;
//         cin>>n;
//         print5(n);
//     }
// }

// void print6(int n){

//     for (int i =1; i <=n; i++){
//         for (int j=1; j<=n-i+1; j++ )
//         {
//             cout << j << " ";
//         }

//         cout << endl;
//     }

// }
// int main(){
//     int t;
//     cin>>t;
//     for (int i = 0;i<t; t++){
//         int n;
//         cin>>n;
//         print6(n);
//     }
// }

// print pattern
/*
 *
 ***
 *****
 *******
 *********
 */
// void print7(int n){

//     for (int i =0; i<n; i++){
//       //space
//         for (int j=0; j<n-i-1; j++ )
//         cout << " ";
//         //stars
//         for (int j=0; j<2*i+1; j++ )
//         cout << "*";
//         //space]
//         for (int j=0; j<n-i-1; j++ )
//         cout << " ";

//         cout << endl;
//     }
// }
// }
// int main(){
//     int t;
//     cin>>t;
//     for (int i = 0;i<t; t++){
//         int n;
//         cin>>n;
//         print7(n);
//     }
// }

/* print pattern
***************
*************
***********
*********
*******
*****
***
*
*/
// void print8(int n){
//     for (int i =0; i<n; i++){
//       //space
//         for (int j=0; j<i; j++ )
//         cout << " ";
//         //stars
//         for (int j=0; j<2*n-(2*i+1); j++ )
//         cout << "*";
//         //space]
//         for (int j=0; j<i; j++ )
//         cout << " ";

//         cout << endl;
//     }

// }
// int main(){
//     int t;
//     cin>>t;
//     for (int i = 0;i<t; t++){
//         int n;
//         cin>>n;
//         print7(n);
//         print8(n);
//     }
// }

// void print9(int n){

//     for (int i =0; i <n; i++){
//         for (int j=0; j<n; j++ )
//         {
//             cout << "* ";
//         }

//         cout << endl;
//     }
// }
//     int main(){
//     int t;
//     cin>>t;
//     for (int i = 0;i<t; t++){
//         int n;
//         cin>>n;
//         print9(n);
//     }
// }

// void print10(int n){

//     for (int i =0; i<=2*n-1; i++){
//         int stars=i;
//         if(i>n) stars =2*n-i;
//         for (int j =1; j<=stars; j++)
//         {
//             cout << "* ";
//         }

//         cout << endl;
//     }
// }

//     int main(){
//     int t;
//     cin>>t;
//     for (int i = 0;i<t; t++){
//         int n;
//         cin>>n;
//         print10(n);
//     }
// }

// void print11(int n){
//     int start=1;
//     for (int i=0; i<n;i++){
//         if(i % 2 == 0) {start = 1;}

//         else {start = 0;}
//     for (int j=0; j<=i; j++){
//         cout << start;
//         start = 1 - start;
//         }
//         cout << endl;

// }
// }

//     int main(){
//     int t;
//     cin>>t;
//     for (int i = 0;i<t; t++){
//         int n;
//         cin>>n;
//         print12(n);
//     }
// }

// void print12(int n){
//     int space= 2*(n-1);
//     for (int i = 1; i<=n; i++){
//         //numbers
//         for(int j=1; j<=i; j++){
//             cout << j;
//         }

//     //space
//     for (int j=1; j<=space; j++){
//         cout << " ";
//     }

//         //numbers
//         for(int j=i; j>=1; j--){
//             cout << j;
//         }
//         cout << endl;
//         space -= 2;

//     }
// }

// void numberCrown(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         // Numbers on the left side
//         for (int j = 0; j <= i; j++)
//         {
//             cout << j + 1 << "";
//         }

//         // Space
//         for (int j = 0; j < 2 * (n - i - 1); j++)
//         {
//             cout << " ";
//         }

//         // Numbers on the right side
//         for (int j = i; j >= 0; j--)
//         {
//             cout << j + 1 << "";
//         }
//         // Print the last number without a space
//         cout << endl;
//     }
// }

void nCharacterTriangle(char n)
{
    char x = 'A';
    for (char i = 'A'; i <= n; i++)
    {
        for (char j = 'A'; j < i; j++)
        {
            cout << x;
            x = x + 1;
        }
        cout << endl;
    }
}

int main()
{
    char t;
    cin >> t;
    for (char i = 0; i < t; t++)
    {
        char n;
        cin >> n;
        nCharacterTriangle( n);
    }
}
