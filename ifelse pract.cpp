#include <bits/stdc++.h>
using namespace std;

int main(){

    char ch;
    cout<<"Enter the Value ch:";
    cin >> ch;

    if(ch >= 'a' && ch <='z'){
        cout << "The Characters are in lower case" << endl; 
    }

    else if (ch >= 'A' && ch <= 'Z'){
        cout<<" The characters are in upper case" << endl;
    }

    else if (ch>='0' && ch <='9') {
        cout <<"This is a number" << endl;
    }

    return 0;
}
