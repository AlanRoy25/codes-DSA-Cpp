#include <iostream>
#include <string>
using namespace std;


string reversestring(string str){

  reverse(str.begin(), str.end());
  str.insert(str.end(), " ");
  int n = str.length();
  int j =0;
  for (int i=0; i<n; i++){
    if(str[i] == ' '){

      reversestring(str.begin()+j, str.begin() +i);

      j = i+1;
    }
  }

  str.pop_back();

  return str;
}
int main(){
  string str = "I like this code";

  string rev = reversestring(str);

  cout << rev;

  return 0;
}