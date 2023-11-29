/*#include <iostream>
#include <string>
using namespace std;

char getMaxOcccharacter(string s){
  
  int arr[26] = {0};

  for(int i=0; i<s.length(); i++){
    char ch = s[i];
    int number =0;
    if(ch>='a'  && ch<='z'){
      number = ch -'a';
    }
  }
  arr[number]++;
}
int max =0; int ans=0;
for(int i=0; i<s.length(); i++){
  if(max<arr[i]){
    ans=i;
    max = arr[i];
  }
  char finalAns= 'a'+ ans;
  return finalAns;
}
int main(){

  string s;
  cin >> s;

  cout<<getMaxOcccharacter(s);
  return 0;
}
*/
//Using unordered map

#include <iostream>
#include <unordered_map>
using namespace std;

char getMaxOccChar(string str){

  unordered_map<char,int>mp;

  int n = str.length(); // to store the length of the character
  char ans; // to store the ans

  int count =0; //to store the count of the character from where it starts/.

  for(int i=0; i<n; i++){
    mp[str[i]]++; //to push the element into the map and increase the freq


  if(count< mp[str[i]]){
    ans= str[i];
    count = mp[str[i]];
  }

  }

  return ans;


}

int main(){

  string str = "life is simple.";

  cout <<"The max occ character is: " <<getMaxOccChar(str) << endl;
}