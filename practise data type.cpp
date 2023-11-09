#include <iostream>
using namespace std;

int glo = 6; // global var
void sum()
{
    int a;
    cout << glo;
}

int main()
{                // prog exe starts
    int glo = 9; // local var (local var has more preference than global var if it has same name in it)
    glo = 78;
    int a = 10, b = 12;
    float c = 2.14;
    char d = 'a';
    bool is_true= false;
    sum();
    cout << glo << is_true;
    cout << "\nThe value of a is :" << a;
    cout <<"\n The Value of b is:" << b;
    cout <<"\n The value of c is :" << c;
    cout <<"\nThe value of d is:" << d;
    return 0;
}
