#include <iostream>
using namespace std;


int allocateunittime(int arr[], int n, int m){

    int s= 0;
    int sum = 0;

    for (i=0; i<n; i++){

        sum+=arr[i];
        }

        int e = sum;
        int ans = -1;

        while (s<=e)
        {
            int mid = s +(e-s)/2;

            if (ifpossible(arr, m, n, mid)) {
            ans = mid;
            e = mid - 1; // Possible sol shift to left
        }
        else {
            s = mid + 1; // Not possible sol shift to right
        }
        mid = s +(e-s)/2;
    }
    return ans;
}

int ifpossible(int arr[], int m, int n, int mid){

    int painterCount =1;
    int unittime = 0;

     for (int i = 0; i < n; i++) {

        if (unittime + arr[i] <= mid) 
        {
            unittime += arr[i];
        }
        else {
            painterCount++;
            if (painterCount > m || arr[i] > mid) {
                return false;
            }
            unittime = arr[i];
        }
    }
    return true;
};

int main(){


    int arr[]= {};
    int m;
    int n;

    cin >> arr[];
    cout << "Enter the arr: " << endl;

    cin >> m;
    cout << "Enter the no of painters: " << endl;

    cout << "The minimum amount of unit time to complete the whole board is: " << allocateunittime (arr,m, n) << endl;


    return 0;
}