/* #include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int amount;
  int note100 = 0, note50 = 0, note20 = 0, note10 = 0;
  cout << "Enter the amount:" << endl;
  cin >> amount;

  while (amount > 0)
  {
    switch (amount)
    {
    case 100:
      amount -= 100; // subtract 100 until it reaches the n value to calculate the count
      note100++;
      cout << "100 Notes is needed to get that amount:" << endl;
      break;

    case 50:
      amount -= 50; // subtract 50 until it reaches the n value to calculate the count
      note50++;
      cout << "50 Notes is needed to get that amount:" << endl;
      break;

    case 20:
      amount -= 20; // subtract 20 until it reaches the n value to calculate the count
      note20++;
      cout << "20 Notes is needed to get that amount:" << endl;
      break;

    case 10:
      amount -= 10; // subtract 10 until it reaches the n value to calculate the count
      note10++;     // increment the count of the notes
      cout << "10 Notes is needed to get that amount:" << endl;
      break;

    default:
      cout << " No valid denomination found for the amount" << endl;
      return 1;
    }
  }

  cout << "Number of 100 rupee notes: " << note100 << endl;
  cout << "Number of 50 rupee notes: " << note50 << endl;
  cout << "Number of 20 rupee notes: " << note20 << endl;
  cout << "Number of 10 rupee notes: " << note10 << endl;

  return 0;
}
*/

#include <iostream>
using namespace std;

int main() {
    int amount;
    int note100 = 0, note50 = 0, note20 = 0, note10 = 0;
    cout << "Enter the amount:" << endl;
    cin >> amount;

    while (amount > 0) {
        if (amount >= 100) {
            amount -= 100;
            note100++;
            cout << "100 Notes are needed to get that amount." << endl;
        } else if (amount >= 50) {
            amount -= 50;
            note50++;
            cout << "50 Notes are needed to get that amount." << endl;
        } else if (amount >= 20) {
            amount -= 20;
            note20++;
            cout << "20 Notes are needed to get that amount." << endl;
        } else if (amount >= 10) {
            amount -= 10;
            note10++;
            cout << "10 Notes are needed to get that amount." << endl;
        } else {
            cout << "No valid denomination found for the remaining amount." << endl;
            return 1;
        }
    }

    cout << "Number of 100 rupee notes: " << note100 << endl;
    cout << "Number of 50 rupee notes: " << note50 << endl;
    cout << "Number of 20 rupee notes: " << note20 << endl;
    cout << "Number of 10 rupee notes: " << note10 << endl;

    return 0;
}
