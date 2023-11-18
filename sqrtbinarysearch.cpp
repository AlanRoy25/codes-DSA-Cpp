this is using if else nested but isme runtime 5ms ara hai which is quite big

#include <iostream>
using namespace std;

int sqrt(int x)
{

    int s = 0;
    int e = x;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        int square = mid * mid;

        if (square == x)
        {
            return mid; 
        }

        else if (square < x) // right side pe jao
            {
                ans = mid;
                s = mid + 1;
            }
         else  //left side pe jao
            {
                e = mid - 1;
            }
            
        

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    int x;
    cout << " ENTER THE VALUE OF X: " << endl;
    cin >> x;
    
    cout << "The square root of x is: " << sqrt(x) << endl;
    
    return 0;
    
}

// the another method using if nested loop isme runtime 0 ms

class Solution {
public:

int binarysearch(int x)
{

    int s = 0;
    int e = x;
    long long int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        long long int square = mid * mid;

        if (square == x)
            return mid;

            if (square < x) // right side pe jao
            {
                ans = mid;
                s = mid + 1;
            }
         else  //left side pe jao
            {
                e = mid - 1;
            }
            
        mid = s + (e - s) / 2;
    
    }
    return ans;
}
    int mySqrt(int x) {
        return binarysearch(x);
    }
};