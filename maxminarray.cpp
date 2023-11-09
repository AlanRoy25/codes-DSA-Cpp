#include <iostream>
using namespace std;


int getMAX(int num[], int n){ // here the size is given as n

    int max = INT_MIN;  //(2^-31 is the min value)
    for (int i=0; i<n; i++ ){
        
        maxi=max(maxi, num[i]);
        // if(num[i] > max){
        //     max=num[i];
        // }
    }
    //returning the max value

    return maxi;
    
}

int getMIN(int num[], int n){ // here the size is given as n

    int min = INT_MAX;  //(2^-31 is the min value)
    for (int i=0; i<n; i++ ){
        
        mini=min(mini, num[i]);
        // if(num[i] < min){
        //     min=num[i];
        // } 
    }
    //returning the min value

    return mini;
    
}


int main(){

    int size;
    cin >> size;

    int num[100]; 
    
    for (int i=0; i < size ; i++){
        cin >> num[i]; //taking input in array
    }

    cout << " The max value is:" << getMAX(num , size);
    cout << " The min value is:" << getMIN(num , size);


    return 0;
}