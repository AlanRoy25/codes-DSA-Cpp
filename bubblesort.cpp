#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
   for (int i=0; i <n-1; i++){

       for(int j=0; j<n-1; j++){

           if(arr[j] > arr[j+1]){ // if a> b then swap kar deta 

               swap(arr[j], arr[j+1]);
           }
       }
   }
}
