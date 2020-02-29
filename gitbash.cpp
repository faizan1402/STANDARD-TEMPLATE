#include<iostream>
using namespace std;
int main(){
	int a =2;
	int b=1;
	auto p =minmax(a,b);
	cout<<"Min is "<<p.first<<endl;
	cout<<"Max is "<<p.second<<endl;
	return 0;
}