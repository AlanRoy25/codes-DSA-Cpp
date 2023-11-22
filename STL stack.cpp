//STL FOR Stack

#include <iostream>
#include <stack>
using namespace std;
int main(){
  stack<string> s;

  s.push("lobe");
  s.push("babbar")
  s.push ("kumar");
  
  cout <<"first Element " << s.top() <<endl;
  s.pop();

  cout <<"first Element " << s.top() <<endl;

  cout <<"size of stack " << s.size() <<endl;
  
  cout <<"Empty or not" << s.empty() <<endl;
}