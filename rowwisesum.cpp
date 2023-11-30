#include <iostream>
using namespace std;

void print Sumrows(int arr[][3], int i , int j){

  cout <<"Printing the sum: " << endl;
  for(int i=0; i<3; i++){
    int sum=0;
    for (int j=0; j<3; j++){
      sum += arr[i][j];

    }
    cout << sum << " ";
  }

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

  Sumrows(arr, 3,3); //always remember void doesnt return any value so there is no need of calling it again the int main,
  // so if to return any value then we use  // Call the function without attempting to use its result
  return 0;
}