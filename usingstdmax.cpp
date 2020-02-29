#include<iostream> 
#include<algorithm> 

using namespace std; 

  
// Defining the binary function 

bool comp(int a, int b)// Comparision operator
{ 

    return (a < b); //Forward value print 
} 

int main() 
{ 

  

    // Finding the largest of all the numbers 

    cout << std::max({1, 2, 3, 4, 5, 10, -1, 7},comp) << "\n"; 

  

return 0; 
}  