
//pass by value 
#include <iostream>
using namespace std;

// void doSomething(int num) {
    // cout << num << endl;
    // num +=5;
    // cout << num << endl;
    // num +=5;
    // cout << num << endl;

//}

    void doSomething(string s){
        s[0] = 't';
        cout << s << endl;
    }

int main() {
    // int num =10;  //the reason why the output 10 is getting printed again is because it is called by value 
    // doSomething(num);
    // cout << num << endl;

    string s = "raj";
    doSomething(s);
    cout << s << endl;
    return 0;
}