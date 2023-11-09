// C++ Program to demonstrate keywords
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	// Variable declaration and
	// initialization
	int n = 6;

	// Switch Case Statement
	switch (n) {
	case 1:
		cout << "Computer Network"
			<< endl;
		break;
	case 2:
		cout << "C++" << endl;
		break;
	case 3:
		cout << "DBMS" << endl;
		break;
	case 4:
		cout << "Data Structure"
			<< endl;
		break;
	case 5:
		cout << "Operating System"
			<< endl;
		break;
	default:
		cout << "Enter Valid number"
			<< endl;
	}

	// Return keyword returns an object
	// to a function's caller
	return 0;
}
