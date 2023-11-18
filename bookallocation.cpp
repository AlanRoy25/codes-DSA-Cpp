#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid) {

    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++) {

        if (pageSum + arr[i] <= mid) 
        {
            pageSum += arr[i];
        }
        else {
            studentCount++;
            if (studentCount > m || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocatebooks(int arr[], int n, int m) {

    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2; 

        if (isPossible(arr, n, m, mid)) {
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

int main() {

    int arr[5] = {10, 20, 30, 40, 50};

    int m;
    cout << "Enter the number of students: " << endl;
    cin >> m;

    int n;
    cout << "Enter the number of pages to be assigned to students: " << endl;
    cin >> n;

    cout << "The possible number of pages assigned is: " << allocatebooks(arr, n, m) << endl;

    return 0;
}
