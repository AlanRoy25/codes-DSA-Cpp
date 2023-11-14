// This is the problem of code studio on find first and last occurence on sorted array;

#include <iostream>
using namespace std;


int firstocc(int arr[], int n, int key){

    int s =0;
    int e = n-1;
    int ans = -1;

    int mid = s + (e-s)/2;

    while(s<=e){

        if (arr[mid] == key){

            ans = mid;
            e = mid -1; 

        }
        else if ( key > arr[mid]) // right pe jao
        {
            s = mid + 1;
        }
        else if  ( key < arr[mid]){ //left pe jao
            e = mid -1;
        }

        mid = s + (e-s)/2;

        
        
    }
    return ans;
}

int lastocc (int arr[], int n, int key){

    int s = 0;
    int e = n-1;
    int ans = -1;

    int mid = s + (e-s)/2;

    while(s<=e){

        if (arr[mid] == key){

            ans = mid;
            s = mid + 1; 

        }
        else if ( key > arr[mid]) // right pe jao
        {
            s = mid + 1;
        }
        else if ( key < arr[mid]) //left pe jao
        { 
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
     return ans;
}


int main(){

    int evenarr[8] = {0, 0, 1, 1, 2, 2, 2, 2};

    cout << " The first index of the occurence is: " << firstocc (evenarr, 8, 4) <<endl;
    cout << " The last index of the occurence is: " << lastocc (evenarr, 8, 4) << endl;

    return 0;
}