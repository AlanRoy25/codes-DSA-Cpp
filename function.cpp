/*

#include <iostream>
using namespace std;

int power(int num1, int num2){

    int ans=1;

    for (int i=1; i<=num2; i++){
        ans= ans * num1;
    }

    return ans;
}

int main(){
    int c , d;
    cin >>c >> d;

    int answer = power (c,d);
    cout << " The answer is :" << answer << endl;

    return 0;
}

*/

/// find out if it is even or odd using the funtion
//even hai tho 1 odd then 0

#include <iostream>
using namespace std;

bool isEven(int num){ // function here is the bool isEven

    if (num&1){
        return 0; //  odd( the & function is used that is 1&1 is 1 rest all is zero)
    }
    else{
        return 1; //even
    }
}

int main() {
    int num;
    cin >> num;

    if(isEven(num)){
        cout<<"The no is even" << endl;
    }
    else {
        cout <<"The no is odd" << endl;
    }
}