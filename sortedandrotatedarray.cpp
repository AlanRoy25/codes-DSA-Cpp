#include <iostream>
using namespace std;

int getPivot(int arr[], int n) {
    int s = 0;
    int e = n - 1;

    while (s < e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }

    return s;
}

int binarysearch(int arr[], int s, int e, int key) {
    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (key == arr[mid]) {
            return mid;
        } else if (key > arr[mid]) {
            s = mid + 1;
        } else if (key < arr[mid]) {
            e = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[5] = {7, 9, 1, 2, 3};
    int n = 5; // You need to specify the size of the array

    int key = 2; // You need to specify the key you want to search

    int pivot = getPivot(arr, n);

    if (key >= arr[pivot] && key <= arr[n - 1]) {
        cout << "Element found at index: " << binarysearch(arr, pivot, n - 1, key) << endl;
    } else {
        cout << "Element found at index: " << binarysearch(arr, 0, pivot - 1, key) << endl;
    }

    return 0;
}
