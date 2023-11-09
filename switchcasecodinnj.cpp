#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;

double areaSwitchCase(int ch, vector<double> a){

    switch (ch)
    {
    case1: //calculate the area of circle
    return M_PI * a[0] * a[0];
    break;

    case2: //calculate the area of rectangle
    return a[0] * a[1];
    break;

    default: 
    cout<< "invalid details" << endl;
    break;

      return 0;
    }
  
}
