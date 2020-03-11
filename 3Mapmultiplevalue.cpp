
// Dictonary
#include<iostream>
#include <map>
#include <functional>
#include <vector>
 using namespace std;

 int main(){

 	         // Print assending order dictionary  and dictionary print sorted order

 	            std :: map < string ,vector<int>,std :: less <>> Map ; 
 	    
 	   Map["chotu"] .push_back (9090909);
 	   Map["Amit"]  .push_back(2343413);
 	   Map["Amit"]  .push_back(2343413);
 	  
 	   //Loop through map 
 	     for(auto &el1 : Map){ 
 	     	cout<<el1.first <<endl;

 	     for(auto &el2 :el1.second){

 	     	 cout<<el2 <<" ";
 	     } 
 	       cout<<endl;
 	   }

 	     	 // Access using [] operator 
 	     	// cout <<Map["chotu"] <<endl;
 	     	 return 0; 
 	     
 }
 // If vector is faster so 2nd is map is also faster 
      

         /*
        Amit
        2343413 2343413
        chotu
        9090909
        */