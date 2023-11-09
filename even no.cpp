#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number :" <<endl;
    cin >> n;

    int sum = 0;

    for(int i=2; i<=n; i=i+2) {
        sum = sum + i;
    }    

    cout << "the sum of all even numbers from 2 to: " << n << " is :" << sum << endl;

    return 0;
}