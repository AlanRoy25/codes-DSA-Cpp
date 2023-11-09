

// This is for arithmetic operator
#include <iostream>
using namespace std;

// int main()
// {
//     int a = 4 , b =5;
//     cout<<"a+b is :"<<(a+b) <<endl;
//     cout<<"a-b is :"<<(a-b) <<endl;
//     cout<<"a*b is :"<<(a*b) <<endl;
//     cout<<"a/b is :"<<(a/b) <<endl;
//     cout<<"a%b is :"<<(a%b) <<endl;
//     cout<<"a++ is :"<<(a++) <<endl;
//     cout<<"a-- is :"<<(a--) <<endl;
//     cout<<"++a is :"<<(++a) <<endl;
//     cout<<"--a is :"<<(--a) <<endl;
//     return 0;

// }

// This is for Relational operator

// int main()
// {
//     int a = 4 , b =5;
//     cout<<"a==b is :"<<(a==b) <<endl; //true is 1 and false is 0
//     cout<<"a>b is :"<<(a>b) <<endl;
//     cout<<"a>=b is :"<<(a>=b) <<endl;
//     cout<<"a<b is :"<<(a<b) <<endl;
//     cout<<"a<=b is :"<<(a<=b) <<endl;
//     cout<<"a!=bis :"<<(a!=b) <<endl;
//     return 0;

// }

// Logical Operator

// int main()
// {
//     int a = 4 , b =5;
//     cout<<"a&&b is :"<<(a&&b) <<endl; //true is 1 and false is 0
//     cout<<"a||b is :"<<(a||b) <<endl;
//     cout<<"!a is :"<<(!a) <<endl;

//     return 0;

// }

// Incremental operator (pre and post)

// int main()
// {
//     int i = 1;
//     int j= 2;
//     int k;

//     //1  //2  //1(2) //2(3) //3  // 4(3)
//     k = i + j + i++ + j++ + ++i + ++j;
//     cout<<i<<" "<<j<<" "<<" "<<k<< endl;

//     return 0;

// }

// Another example
// int main()
// {
//     int i = 0;
//     // 0(1) 1(0)  0(1)  1(0)
//     i = i++ - --i + ++i - i--;
//     // 0-0+1-1 = 0
//     cout << i << endl;
//     return 0;
// }

// another example

int main()
{
    int i = 5, j = 20, k;
    k = i-- + i++ - --j - ++j + --i - j-- + ++i - j++;

    cout << i << endl;
    cout << j << endl;
    cout << k << endl;

    return 0;
}