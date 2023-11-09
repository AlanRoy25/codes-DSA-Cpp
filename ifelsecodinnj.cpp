//write a program you are given two numbers 'a' and 'b',
// Compare the numbers and print the relation, Print "smaller"."greater"or "equal" 
//when 'a' is smaller than 'b',greater than 'b',or equal to 'b'. Using if -else  and code in c++ 
//The desired answer for that problem is :

/*
    Time complexity: O(1)
    Space complexity: O(1)
*/
#include <iostream>
#include <string>
using namespace std;

string compareIfElse (int a, int b) {

    if (a > b)
        return "greater";
    else if (a < b)
        return "smaller";
    else
        return "equal";

}
int main() {
    int a, b;

    // Input the two numbers
    cout << "Enter the first number (a): ";
    cin >> a;
    cout << "Enter the second number (b): ";
    cin >> b;

    // Call the compareIfElse function with user-provided values
    string result = compareIfElse (a, b);

    // Output the result
    cout << "The relationship between a and b is: " << result << endl;

    return 0;
}
