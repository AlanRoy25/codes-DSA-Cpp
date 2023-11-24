#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3, int m, int n) {
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
            
        } else {
            arr3[k++] = arr2[j++];
           
        }
    }

    // Copy remaining elements from arr1 to arr3 if any
    while (i < m) {
        arr3[k++] = arr1[i++];
        
        
    }

    // Copy remaining elements from arr2 to arr3 if any
    while (j <  n) {
        arr3[k++] = arr2[j++];
        
    }
}

void print(vector<int> ans, int n) {
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;  // Move this line outside the loop
}

int main() {
    vector<int> arr1 = {1, 3, 5, 7, 9};
    vector<int> arr2 = {2, 4, 6};
    vector<int> arr3(8);

    merge(arr1, arr2, arr3, 5, 3);
    print(arr3, 8);

    return 0;
}
