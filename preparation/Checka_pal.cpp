#include<iostream>
using namespace std;
bool checkpal(string s){
	  int i=0;
	  int j=s.length()-1;
	  while(i<j){
	  	if(s[i]!=s[j])return 0;
	  	 i++;
	  	 j++;
	  }
	  return 1;
	
	
	
	
}
int main(){
	string s="namdan";
	checkpal(s);
	if(checkpal){
		cout<<"it is a palindrome"<<endl;
		
	}
	else{
		cout<<"it is not"<<endl;
		
	}
	return 0;
}
