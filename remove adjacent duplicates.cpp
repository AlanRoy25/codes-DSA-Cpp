#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


string getAdajacentDup(string& s){
  int i =0;
  int j= s.size()-1;
  while(i<j){
    
    if(s[i] == s[i+1]){
      s.erase(i, 2);
      j=s.size()-1;
      if(i>0){
          i--;
      }
    }
    else{
     i++;
    }
}
return s;
}
int main(){

  string s;
  cout <<" Enter the string :" << endl;
  cin >> s;

  cout << "the final string is: " <<getAdajacentDup(s);

  return 0;

}


// Another approach

#include <iostream>
#include <string>
using namespace std;

string removeduplicates(sring s){
  string unique ="";
  int index=0;

  while(index < s.length()){
    if(unique.length() >0 && unique[unique.length()-1]==s[index]){
      unique.pop_back();
    }
    else{
      unique.push_back()
    }
    index++;
  }
  return unique;
}