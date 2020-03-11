/*
 1 .Sntax : map<T1,T2> obj ;// When T1 is key type and T2 is value type
 2 . std :: map associated container that store element in key value combination
 where key should be unique ,otherwise it overides the privous value.
 3 . It is implement using Self -Balance Binary search Tree (AVL/Red Black Tree).
 4 . It is store key value pair in sorted order on the basis of key (assending/decending)
 5 . std ::map is generally used in dictionary type problems.
 */
// Dictonary
#include<iostream>
#include <map>
#include <functional>
#include <vector>
 using namespace std;

 int main(){

 	         // Print assending order dictionary  and dictionary print sorted order

 	            std :: map < string ,int > Map ; 
 	    
 	   Map["chotu"] =9090909;
 	   Map["Amit"]  = 982349819;
 	   Map.insert(std ::make_pair("Bot",782348818));

 	   //Loop through map 
 	     for(auto &el1 : Map){ // Means element first is dictionary order is amit and value is 982349819 and 2nd element is  chotu and value is mob no
 	     	cout<<el1.first <<" "<<el1.second <<endl; // print first element and second element 
}
 	     	 // Access using [] operator 
 	     	 cout <<Map["chotu"] <<endl;
 	     	 return 0; 
 	     
 }
 
/*
  chotu 9090909
  Bot 782348818
  Amit 982349819
  9090909
  */