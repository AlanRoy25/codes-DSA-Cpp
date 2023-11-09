#include <iostream> // this program is related to the input output operator.
using namespace std;

int main()
{
    int num1, num2;
    cout<<"\n The value of num1:";
    cin>>num1;  // the >> operator is used for taking input from the user.

    cout<<"\n The value of num2:";
    cin>>num2;

    cout<<"The sum is:"<<num1+num2;
    return 0;
}