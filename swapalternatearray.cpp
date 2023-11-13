#include <iostream>
using namespace std;

void printArray(int arr[], int n){

    for (int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
    cout <<endl;
}

void swapalternate(int arr[], int size){

    for (int i=0; i<size; i+= 2){ // 

        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}


int main(){

    int evenarr[6] = {1, 4, 5, 3, 8, 11};
    int oddarr [5] = {2, 4, 10, 3, 1};


    swapalternate(evenarr, 6);
    printArray(evenarr, 6);

    // swapalternate(oddarr, 5);
    // printArray(oddarr, 5);


    return 0;
}