#include <iostream>
using namespace std;

int gcd(int a, int b){
  if(a==0)
  return b;

  if(b==0)
  return a;

  while (a != b){
    if(a>b){
      a=a-b;
    }
    else{
      b = b-a;
    }
  }
  return 0;
}
int main(){
  int a;
  int b;

 
  cout <<"Enter the values of A & B";
  cin >> a >> b;

  int ans = gcd(a,b);

  cout << "The GCD of " << a << "& " << b << " is :" <<ans << endl;

  return 0;

}