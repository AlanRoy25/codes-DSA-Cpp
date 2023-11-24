#include <iostream>
#include <vector>
using namespace std;

void rotatearray(vector<int>&arr, int k){
  int n = arr.size();
  vector<int> temp(n);
  
  for(int i=0; i<arr.size(); i++){
    temp[(i+k)%n] = arr[i];
  }

  arr = temp;

}

void print(vector<int>&arr){
   for (int i=0; i<arr.size(); i++){
    cout << arr[i] << "  ";
  }
  cout << endl;
}

int main(){

  vector<int> arr ={11, 12, 13, 14, 15};

  int k = 2;
  rotatearray(arr,k);
  print(arr);

  return 0;
}