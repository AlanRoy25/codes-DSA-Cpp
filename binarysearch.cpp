#include <iostream>
using namespace std;


int binarysearch (int arr[], int size, int key) {

    int start =0;
    int end = size -1;

    int mid = (start+end)/2;

    while(start <= end){

        if(arr[mid] == key){

            return mid;
        }

        // right wala part
        if (key > arr[mid]){

            start = mid + 1;
        }
        //left wala part.
        else {

            end = mid -1;
        }
        mid = (start + end)/2;


    }
    return -1;

}

int main(){

    int evenindex[6] = {1, 2, 5, 7, 12, 18};
    int oddindex[5] = {1, 2, 4, 6, 8};

    int evenindexresult = binarysearch(evenindex, 6, 7);

    cout << " The index of the even binary search is: " << evenindexresult ;
    
    cout << endl;
    int oddindexresult = binarysearch(oddindex, 5, 2);
    cout << " The index of the odd binary search is: " << oddindexresult;

    return 0;
}