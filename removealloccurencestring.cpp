#include <iostream>
#include <string>
using namespace std;


string RemoveOccstring(string& s, string part){

  while(s.length() != 0 && s.find(part) < s.length()){

    s.erase(s.find(part), part.length());
  }
  return s;

}
int main(){

  string s = {"daabcbaabcbc"};
  cout << s << endl;

  string result = RemoveOccstring(s, "abc");

  cout << result << endl;

  return 0;
}