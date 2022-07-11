// CPP program to demonstrate
// Implementation of empty() function
#include <deque>
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	deque<int> mydeque;
	mydeque.push_front(1);

	// deque becomes 1
	if (mydeque.empty()) {
		cout << "True";
	} else {
		cout << "False";
	}
	
	return 0;

} // End driver
