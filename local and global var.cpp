// #include <iostream>
// using namespace std;

// //global var calling out
// int a=10;

// int main()
// {
//     int b =20; // local var
//     cout <<"Int Value A: " << a << endl;
//     cout <<"Int Value B: " << b <<endl;

//     return 0;
// }


//what if the local and global both has the same var name;

#include <iostream>
using namespace std;

//global var calling out
int a=10;

int main()
{
    int a =20; // local var
    cout <<"Int Global A: " << ::a << endl;
    cout <<"Int Local A: " << a <<endl;

    return 0;
}