#include<iostream>
#include<map>
using namespace std;
   int main(){


   	     map <int ,string > customer ;

   	     customer [100] = "Harry"; // Key is index number and value is string
   	     customer [123] ="Johnson" ;
   	     customer [140] ="Petter" ;
   	     customer [150] ="Marry" ;
   	     customer [200] ="Elision" ;

   	       cout << customer[100]<<endl;
   	       cout<< customer [123] <<endl;
   	       cout <<customer [140] <<endl;
   	       cout <<customer [150] <<endl;
   	       cout <<customer [200]<<endl;
   	     // Means either above type code implement or below side  code but below is making time initialise the value

   	     // So this part separate code
        
        map <int,string > c{{100, "Harry"},{123,"Johnson"}, {140,"Petter"},{150, "Marry"},{200,"Elision"}};
        // So this type loop not run numeric type value so print only iterator type loop run
         
         // Create iterator

          map <int ,string > :: iterator p =customer.begin();
          while (p!=customer.end()){

          	   cout<<p->first <<"  "<< p->second <<"  "<<endl; // so first is key print and second is value print 
          	   p++;

          }
          
      }









        /*

          Useful  function of map class

           . at
           . []
           .  size()
           .  empty()
           .  insert()
           .  cler()
*/
   