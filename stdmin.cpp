std::min in C++
std::min is defined in the header file and is used to find out the smallest of the number passed to it. It returns the first of them, if there are more than one.
It can be used in following 3 manners:

It compares the two numbers passed in its arguments and returns the smaller of the two, and if both are equal, then it returns the first one.
It can also compare the two numbers using a binary function , which is defined by the user, and then passed as argument in std::min().
It is also useful if we want to find the smallest element in a given list, and it returns the first one if there are more than one present in the list.
The three versions are as defined below:

For comparing elements using < :
Syntax:


/*std::min in C++
std::min is defined in the header file and is used to find out the smallest of the number passed to it. It returns the first of them, if there are more than one.
It can be used in following 3 manners:

It compares the two numbers passed in its arguments and returns the smaller of the two, and if both are equal, then it returns the first one.
It can also compare the two numbers using a binary function , which is defined by the user, and then passed as argument in std::min().
It is also useful if we want to find the smallest element in a given list, and it returns the first one if there are more than one present in the list.
The three versions are as defined below:

For comparing elements using < :
Syntax:
*/ 

// C++ program to demonstrate the use of std::min 
#include <iostream> 
#include <algorithm> 
using namespace std; 
int main() 
{ 
	int a = 5; 
	int b = 7; 
	cout << std::min(a, b) << "\n"; 

	// Returns the first one if both the numbers 
	// are same 
	cout << std::min(7, 7); 

	return 0; 
} 
