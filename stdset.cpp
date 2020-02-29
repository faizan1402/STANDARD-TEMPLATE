/* Syntax - : std ::set<T>
 1 : std : set is an associative container that contains a sorted set of unique objects of type key.
 2 : It is usually implemented the Red-Black Tree 
 3 : Insertion ,Removal,search have logirathmic complexity 
 function so that set can store then in sorted order .
 //Bottom Line :
 // It store unique elements and they are sorted order (A/D)
 */
#include<iostream>
#include<set>
//#include<string>
#include<functional>
using namespace std;
  int main(){

	 set<int> Set ={1,2,3,4,5,6,1,2,3,4,5};
	 for(const auto& f: Set){ // This is a function in built function  and function const auto & end element :set
	 	cout << f<<"\t";
	 }
	 return 0;
	}
	  

