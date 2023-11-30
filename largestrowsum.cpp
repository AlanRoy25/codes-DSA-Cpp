#include <bits/stdc++.h>
using namespace std;

void Sumrows(int arr[][3], int i , int j){

  cout <<"Printing the sum: " << endl;
  for(int i=0; i<3; i++){
    int sum=0;
    for (int j=0; j<3; j++){
      sum += arr[i][j];

    }
    cout << sum << " ";
  }
}

int largestrowSum(int arr[][3], int i, int j){

  int maxi = INT_MIN;
  int rowindex =-1; //The value -1 serves as an indicator that no row with a sum greater than INT_MIN has been encountered yet

  for(int i=0; i<3; i++){
    int sum=0;
    for (int j=0; j<3; j++){
      sum += arr[i][j];

    }
    if(sum > maxi){
      maxi = sum;
      rowindex = i; // updating the rowindex 
    }
  }
  
  cout << "The max sum is " << maxi << endl;
  return rowindex;

}
int main(){

  int arr[3][3];

  cout << "Enter the numbers: " << endl;
  
  //taking input 
  for(int i=0; i<3; i++){
    for (int j=0; j<3; j++){
      cin >> arr[i][j];
    }
    cout << endl;
  }

  //for output
  for(int i=0; i<3; i++){
    for (int j=0; j<3; j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
    int ans= largestrowSum(arr,3,3);
  cout << "Max row is at index " <<ans << endl;
  return 0;
}