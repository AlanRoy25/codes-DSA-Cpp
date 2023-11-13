#include <iostream>
using namespace std;

void Reversearray(int arr[], int n){
 
    int start =;
    int end = n-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}


void Printarray (int arr[], int n){
    
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main(){

    int arr[5] = {12, 4, -5, 8, 2 };
    int brr[6] = {4, 8, 7, 12, 2, 3 };

    Reversearray(arr, 5);
    Reversearray(brr, 6);

    Printarray(arr, 5);
    Printarray (brr, 6);

    return 0;

}