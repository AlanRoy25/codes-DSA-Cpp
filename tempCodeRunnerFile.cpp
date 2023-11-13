#include <iostream>
using namespace std;



void printArray(int arr[], int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

}

void sortOne (int arr[], int n){

    int left =0;
    int right = n-1;
    int step =0;
    
    while(left < right){
        cout << "Step" << step++ <<endl;
        printArray(arr, n);
        cout << endl;
    

    while (arr[left] == 0)
    {
        left++;
    }

    while (arr[right] == 0)
    {
        right--;
    }

    swap(arr[left], arr[right]);
    left++;
    right--;
    
}

in main(){
    
    arr[8] = {1, 1, 0, 1, 0, 0, 1, 0 }

    sortOne(arr, 8);
    printArray(arr, 8);

    return 0;

}