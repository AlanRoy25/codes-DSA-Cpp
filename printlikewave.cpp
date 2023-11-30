#include <iostream>
#include <vector>
using namespace std;

vector<int> waveprint(vector<vector<int>> arr, int nRows, int mCols){

  vector<int> ans;
  for(int j=0; j<mCols; j++){

    if(j %2 == 0){

      //print from top to bottom.
      for(int i=0; i<nRows; i++){
        ans.push_back(arr[i][j]);
      }
    }
    else{

      for (int i=nRows-1; i>=0; i--){

        //print for bottom to top for odd index
        ans.push_back(arr[i][j]);
      }
    }
  }
  return ans;
}
int  main(){

  vector<vector<int>> arr(3, vector<int>(3, 0));

  cout << "Enter the numbers: " << endl;

  for (int i=0; i<3; i++ ){
    for (int j=0; j<3; j++){
      cin >> arr[i][j];
    }
    cout << endl;
  }

  //print the output 

    for (int i=0; i<3; i++ ){
    for (int j=0; j<3; j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  vector<int> finalans = waveprint(arr, 3, 3);

  cout << "The wave print for the following is : ";
  for(int num:finalans){
    cout<< num << " ";
  }
  cout << endl;
  
  return 0;
  

}

// Another apporoach

#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for(int col=0; col<mCols; col++){

        if( col&1 ){
            //for odd index we need to print bottom to top
            for(int row =nRows-1; row>=0; row--){ //idhar rows neeche 
                //cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }
        else{
            //for even index we neet to print from top to bottom
            for (int row = 0; row < nRows; row++) {
                //cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
};