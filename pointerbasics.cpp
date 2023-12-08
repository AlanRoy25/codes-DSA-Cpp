#include <iostream>
using namespace std;

// int main(){
//   int  num =5;
//   int a = num;

//   cout <<"a before " << num << endl; // basically this will print the value of num ie 5
//   a++;
//   cout <<"a before " << num << endl; // this wont increment because the value is stored in the same and copy is not created , its reference is obtained.


//   cout<< "The address of num is :" << &num << endl; // this & opertor is used to find the address of the variable.

//   int *ptr = &num; // this the way a pointer is  written creating // value will be 5
//   cout <<" before " << num << endl; // this will give the value of num = 5
//   (*ptr)++;
//   cout <<" after " << num << endl; // This will give the value pf num =6 since the ptr increment and stores again its value the same address.


  
//   cout << "address is : " << ptr << endl; // this is the way we can find out the address where the value is stored.
//   cout << "address is : " << *ptr << endl; // by using the * we can find out the value in that ptr

//   double d = 4.3;
//   double *p2 = &d;

//   cout << "address is : " << p2 << endl; // this is the way we can find out the address where the value is stored.
//   cout << "address is : " << *p2 << endl; // useed to find the value where it is stored

//   cout << "The size is: " << num << endl; //  num will be 4 byte integer
//   cout << "The size is: " << p2 << endl; // the size of ptr will be 8 byte even if its long long, double , int ,char 

//   //copying a pointer 
//   int *q = ptr;
//   cout << ptr << " - " << q << endl; //address dega  
//   cout << *ptr << " - " << *q << endl; // value dega that is num =6

//   //important concept :
//   int i=3;
//   int *t = &i;
//   *t = *t+1;
//   cout << "before t" << t << endl; // iska output will be 0x16bce746c
//   t =t +1;
//   cout << "after t" << t << endl; // iska output will be 0x16bce7470 this is because yeh 4 digit aage badhayega i.e c,d,e,f, 0 se start hua next


int main(){
  int arr[10] = {1,2,4,5};
  
  cout <<"The address of first memory block is " << arr << endl; // this will be the address of the first block in array
  cout << arr[0] << endl;
  cout << "address of the first memory block is " << &arr[0] << endl; // another way of declaring address

  cout << "4th " << *arr << endl;
  cout << "5th " << *arr +1 << endl;
  cout << "5th " << *(arr +1) << endl;  
  cout << "5th " << *(arr) +1 << endl;
  cout << "6th " << arr[2] << endl;
  cout << "7th" <<  *(arr +2) << endl;

  int i =3;
  cout << i[arr] << endl;

  int temp[10];
  cout << sizeof(temp) << endl;

  int *ptr = &temp[0]
  cout << sizeof(ptr) << endl;
  cout << sizeof(*ptr) << endl;
  
}

