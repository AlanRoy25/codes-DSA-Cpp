/// STL in cpp for vectors

#include <iostream>
#include <vector>

using namespace std;
int main()
{

  vector<int> v;
  vector<int> a(5,1); // iske matlab 5 size hai and 1 element hai and poora array 1 se start karo
    cout<<"print a" << endl;
    for (int i:a){
      cout << i << " ";
    }

    //now if we want to  copy this vector to another vectory array then we can use another var 
    vector<int> last(a);
    cout<<"print last" << endl;
    for (int i:last){
      cout << i << " ";
    }


  cout << "Capacity --> " << v.capacity() << endl;

  v.push_back(1);
  cout << "Capacity --> " << v.capacity() << endl;

  v.push_back(3);
  cout << "Size" << v.size() << endl;

  cout << "element at index 2" << v.at(2) << endl;

  cout << "front" << v.front() << endl;
  cout << "back" << v.back() << endl;

  cout << "before pop" <, endl;
  for (int i : v)
  {
    cout << i << " ";
  }
  cout << endl;

  v.pop_back();
  cout << "after pop" <, endl;
  for (int i : v)
  {
    cout << i << " ";
  }

  cout << "before clear size " << v.size() << endl;
  v.clear();
  cout << "after clear size " << v.size() << endl;
}