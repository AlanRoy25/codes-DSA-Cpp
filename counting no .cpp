#include <iostream>
using namespace std;

//function signature 
void printReverseCounting(int n)
{   

    //function body
    for (int i=n; i <= 1; i++){ // forward counting (int i =1;  i<=n; i++)
        cout << i << endl;
    }
}

int main(){

    int n;
    cin >> n;

    //function call
    printReverseCounting(n); 

    return 0;
} 