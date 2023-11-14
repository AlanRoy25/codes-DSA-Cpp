#include <iostream>
using namespace std;


int firstocc(int arr[], int n , int key){

    int s=0;
    int e = n-1;
    int ans =0;
    int mid = s + (e-s)/2;

    while(s<=e){

        if (key == arr[mid]){
            
            ans=mid;
            e = mid-1;
        
        else if ( key > arr[mid]){
            s= mid+1;
        }
        else if (key < arr[mid]){
            e= mid-1;
        }

        mid = s +(e-s)/2;

    }
    return ans;
}
}
int lastocc(int arr[], int n , int key){

    int s=0;
    int e = n-1;
    int ans =0;
    int mid = s + (e-s)/2;

    while(s<=e){

        if (key == arr[mid]){
            
            ans=mid;
            s = mid +1;
        else if ( key > arr[mid]){
            s= mid+1;
        }
        else if (key < arr[mid]){
            e= mid-1;
        }

        mid = s +(e-s)/2;

    }
    return ans;
}

}

int main (){

    int evenarr[8] = {0, 0, 1, 1, 2, 2, 2, 2 };
    
    int firstindex = firstocc(evenarr, 6, 2);
    int lastindex = lastocc(evenarr, 6, 2);

    cout << "The Index of first number is: "  << firstocc(evenarr, 8, 2) << endl;
    cout << "The Index of last number is: "  << lastocc(evenarr, 8, 2) << endl;


    int totalnoOccurence = (lastindex - firstindex) + 1;

    cout << "The no of occurences of an number is: "  << totalnoOccurence << endl;

    return 0;
}