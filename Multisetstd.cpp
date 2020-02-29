/* 
Topic -: Multiset  
Syntax - : std ::multiset<T> ObjectsName;
1 std ::multiset is an Associative container that contains a sorted set of duplicate objects of type key .
2 It is usually implemented using Red -Black  Tree.
3 Insertion ,Removal ,Search have logarithmic complexity .
4 If we want to store user defined data type in multiset then we will have to provide compare function so that multiset can store them in sorted order.
5 We can pass the order of sorting while constructing set objects.

BOTTOM LINE  :
multiset is similar to set except it can have multiple elements with same value
*/
#include<iostream>
#include<vector>
#include<string>
#include<functional>
using namespace std;
 int main(){

 	  std :: multiset<int> multiSet ={5,2,4,3,2,5};

 	  for ( const auto& e: multiSet){// this function basically used the set and multiset using  &e is the range of set value 
 	  	cout<<e<<endl;
 	  }
return 0;


 }