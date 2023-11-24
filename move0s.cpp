#include <iostream>
#include <vector>
using namespace std;

void movezeros(vector<int>& arr, int n){

  int i =0;
  
  for (int j=0; j <  arr.size(); j++){
    if(arr[j] != 0){
      swap(arr[j],arr[i]);
      i++;
    }
  }
  
}

void print(vector<int>&arr, int n){

  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
    }
    cout << endl; 
  }
int main(){

  vector<int>arr = {0,1,0,3,12};

  movezeros(arr,5);
  print(arr, 5);

  return 0;
  }