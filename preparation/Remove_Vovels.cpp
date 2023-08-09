#include<iostream>
using namespace std;
int removeval(string s){
	for(int i=0;i<s.length();i++){
		 if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
		 	
		 	continue;
		 }
		 else
		 cout<<s[i];
		
		
		
	}
	
}
int main(){
	string str;
	getline(cin,str);

	cout<<removeval(str);
	
	return 0;
}
