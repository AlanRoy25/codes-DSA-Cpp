// input a number n and tell me whether it is equal to ,less than or more than 10
#include <iostream>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the Value of n:"<<endl;
    cin >> n;


    if (n > 10)
    {
        cout << "it is more than 10" << endl;
    }
    else if (n < 10)
    {
        cout << "It is less than 10" << endl;
    }
    else
    {
        cout << "It is equal to 10" << endl;
        return 0;
    }
}
