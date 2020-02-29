#include<iostream>
using namespace std;
int main(){
	cout<<"Enter words"<<endl;
	string shortest,longest,word; //string shortest,longest,word
	cin>>word;
	shortest=longest=word;//three string equal to because some string are equal 
	while(cin>>word){
		if(word.size()>longest.size()) //means word is greater than longest string because word more time then count maximum longest string
			longest=word;
		else if(word.size()<shortest.size())//word is less than shortes string because word less type ony shortest string find
			shortest=word; 
	}
	

	 cout<<"The longest word entered was"<<longest<<"with a length of"<<" "<<longest.size()<<" "<<endl;
	   cout<<"The shortest word entered was"<<shortest<<"with a length of"<<" "<<shortest.size()<<" "<<endl;
	return 0;

}
/* out put howmany longest string and shortest string (how many a single string total character count )
suppose
FAIZAN AHMAD (LONGEST STRING=11)
GO(SHORTEST STRING=2)
*/