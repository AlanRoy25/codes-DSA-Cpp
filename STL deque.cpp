//stl in deque (double ended queue)
#include <iostream>
#include <deque> // adding the lib

int main(){
  deque<int> d;
 

   // inserting a element in array..
     d.push_back(1);
  d.push_front(2);
  // the output will be 2,1

  for(int i:d){
    cout << i << " ";
  }
  d.pop_back();
  cout << end;
  for(int i:d){
    cout << i << " ";
  }
  d.pop_front();
  cout << endl;
  for(int i:d){
    cout << i << " ";
  }
  cout << "Print first Index element" << d.at(1)<< endl;

  cout <<"front"<<d.front() <<endl;
  cout << "back"<<d.back() << endl;

  cout<<"Empty or not" <<d.empty() << endl;

  cout <<"before erase " <<d.size()<<endl;
  d.erase(d.begin(), d.begin()+1);
  cout <<"after erase " <<d.size()<<endl;
    for(int i:d){
    cout << i << " ";
  }    



  
}

