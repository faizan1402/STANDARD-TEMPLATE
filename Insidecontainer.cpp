#include<iostream>
#include<vector>
using namespace std;
  int main(){ 

  	  std::vector<vector<int>> Tree;//So vector class inside the declare and tree also declare inside vector class and two vector container is present 
  	  int n1,n2,edge;

  	  cin >> edge;	
  	    
  	  Tree.resize(edge);
  	  for(int i=0;i<edge;++i){

  	  	cin >>n1>>n2; // n1 is a source   n2 is a destination
  	  	Tree[n1].push_back(n2);

  	  }

  	  for(const auto &e1:Tree){
  	  	for(const auto &e2: e1){

  	  		cout<<e2;
  	  	}
  	  	cout<<endl;
  	  }
  	  return 0;	
  }