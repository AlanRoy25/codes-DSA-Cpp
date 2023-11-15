#include <iostream>
using namespace std;

int getpivot(int arr[], int n){

    int s=0;
    int e= n-1;
    int mid =s+ (e-s)/2;

    while(s<e){
        if  (arr[mid]>=arr[0]){

            s=mid+1;
        }
        else {
            e = mid;
        }

    mid =s+ (e-s)/2;
    }
    return s; //uh can use e also to return
}

int main(){

    int arr[5] = {6, 8, 10, 12, 4}; //check the above exp find out the mid and compare it with the if cond and see where it lies on the line. 

    cout<< "The pivot is: " << getpivot(arr, 5) << endl;
    
    return 0;
} 