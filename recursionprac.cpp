#include <iostream>
using namespace std;

int cnt =0;
void print(){
  if (cnt == 3)
    return ;
    cout << cnt << endl;
  print()
}
int main(){
  print()
  return 0;
}

// print names 4 times using recursion


void f(int i,int n){
  if (i>n) 
  return;
  cout << "raj" << endl;
  f(i+1, n);
}
int main(){
  int n ;
  cin >> n;
  f(1,n);
}


//print lineraly (1-n)

void f(int i,int n){
  if(i>n) 
  return;
  cout << (i);
  f(i+1, n);
}
int main(){
  int n;
  cin>>n;
  f(1,n)
}

//print reverse n-1


void f(int i , int n){
  if(i<n) return ;
  cout << i;
  f(i-1, n);
}
int main(){
  int n;
  cin >> n;
  f(n,n);
}


//print lineraly 1-n using backtracking
void f(int i, int n){
  if(i<1) return;
  f(i-1, n)
  cout << i;
}
int main(){
  int n;
  cin >> n;
  f(n,n);
}

//print reverse n-1 using backtracking


void f(int i, int n){
  if(i<n) return;
   cout << i;
  f(i-1,n);

}
int main(){
  int n;
  cin >> n;
  f(n,n);
} 

//sum of first n natural numbers using parameterized way


void f(int i, int sum){
  if(i < 1) {
  cout << sum;
  return;}
  f(i-1, sum+i);
}
int main(){
  int n;
  cin>> n;
  f(n,0);
}

// using the function way


int f(int n){
  if(n==0){
    return 0;
  }
  return n + f(n-1);
}
int main(){
  int n;
  cin >> n;
  cout << f(n);
  return 0;
}