#include <iostream>
#include <string>
using namespace std;

string replacespaces(string& str){
  string temp = "";

  for(int i=0; i<str.length(); i++){
    if(str[i] == ' '){

      temp.push_back('@');
      temp.push_back('4');
      temp.push_back('0');

    }
    else{
      temp.push_back(str[i]);
    }
  }
  return temp;
}

int main(){

  string str = "coding ninjas is a coding platform";
  cout << "original string is:  "<<str <<endl;
  
  string result = replacespaces(str); 
  cout << endl;
  cout << "Replacing the spaces " <<result<< endl;
  return 0;
}