#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target , int i , int j ){ // need to mentiion the column always
   for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
     if(arr[i][j] == target){
      return 1;
     }
    }
  }
  return 0;
}

int main(){

  int arr[3][4];
  //   int arr[3][4] = {1,2,3,4,5,6,67,68,9,22,23,64};
  // int arr[3][4] = { {1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

  //for taking input row wise 
  for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
      cin >> arr[i][j];
    }
  }

  // //for taking input column wise
  // for(int j=0; j<4; j++){
  //   for (int i=0; i<3; i++){
  //     cin >> arr[i][j];
  //   }
  // }

    //for print row wise
  for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
      cout << arr[i][j] << " ";
    }
  }

  //for print column wise
  // for(int j=0; j<4; j++){
  //   for (int i=0; i<3; i++){
  //     cout << arr[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  cout << " Enter the element to search:" << endl;
  int target;
  cin>> target;

  if(isPresent(arr, target, 3, 4)){

    cout <<"Element found" <<endl;
  }
  else{
    cout <<"Element not found " << endl;
  }

  return 0;
}