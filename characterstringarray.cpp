/*#include <iostream>
using namespace std;

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
  
  cout << "the Length of character is: " <<getLength(name) << endl;
  
  return 0;
}
*/

// Reverse an character;

#include <iostream>
using namespace std;

void Reverse(char name[], int n){
  int s=0;
  int e=n-1;

  while(s<e){
    swap(name[s++], name[e--]);
  }
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
  
  int len = getLength(name)
  cout << "the Length: " << len  << endl;

  Reverse(name, len);
  
  return 0;
}