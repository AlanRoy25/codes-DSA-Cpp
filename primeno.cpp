/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 2;

    while (i < n) //here the main funda is ki the number which divides by itself should get the remainder as 1 then its prime or else not prime
    {
        if (n % i == 0) //to check the modulus whether remainder is 1
        {
            cout << "Not prime for " << i << endl;
        }
        else
        {
            cout << "prime for " << i << endl;
        }
        i = i + 1; // incrementing untill it reachs the n value  and its always calculated as (n-1)
    }
}
*/

// Using the Function  write for [prime nos]

#include <iostream>
using namespace std;

bool isPrime(int n){

    for(int i = 2; i<n; i++){

        if( n % i == 0){
            return 0 ;

        }
    }
    return 1;
}

int main(){

    int n;
    cin >> n;

    if(isPrime(n)){
        cout << " The no is prime" << endl;
    }
    else {
        cout << "It is not a prime" << endl;
    }

}