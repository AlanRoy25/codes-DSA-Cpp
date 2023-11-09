#include <iostream>
using namespace std;

int main(){
double farenheith, Celsius;

    cout<<"Enter the Value of farenheith :" << endl;
    cin >>farenheith;

    Celsius= (farenheith-32) * 5.0/9.0;

    cout<< " The Value of Celsius :" << Celsius << "C" <<endl; 

    return 0;
}