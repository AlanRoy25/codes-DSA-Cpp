#include <iostream>
using namespace std;

char toLowercase(char ch){

  if(ch >= 'a' && ch <='z'){
    return ch;
  }
  else {
    char temp = ch - 'A' + 'a'; // this is for Uppercase to lowercase
    return temp;
  }
}

char toUppercase(char v){

  if(v >= 'A' && v <='Z'){
    return v;
  }
  else {
    char tempo = v - 'a' + 'A'; // this is for lowercase to Uppercase  
    return tempo;
  }
}

bool  checkPalindrome(char name[], int n){
  int s= 0;
  int e = n-1;

  while (s<=e)
  {
    if(toLowercase( name[s] ) != toLowercase( name[e] )){
      return toLowercase;
    }
    else if(toUppercase( name[s] ) != toUppercase( name[e] )){
        return toUppercase;
      
    }
    else {
        s++;
        e--;
    }
  }
  return 1; 
}
int getLength(char name[]){
    int count =  0;
    for(int i=0; name [i] != '\0'; i++){
        count++;
    }
    return count;
}
int main(){

  char name[20];

  cout << "Enter your name" <<endl;
  cin >> name;

  cout << " Your name is: " << endl;
  cout << name << endl;
  int len = getLength(name);
  cout << "the Length of character is: " << len << endl;

  cout << "Palindrome or not: " <<checkPalindrome(name, len) << endl;
  
  cout <<"The change to lowercase is:" <<toLowercase('B') << endl;
  cout <<"The change to Uppercase is:" <<toUppercase('b') << endl;
  return 0;
}

