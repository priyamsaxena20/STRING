#include<iostream>
using namespace std;
int solve(string s,int length){
	
	// convering to lower case
	for(int i=0;i<length;i++){
		s[i]=tolower(s[i]);
	}
	int vovel=0,constant=0,space=0;
	for(int i=0;i<length;i++){
	
	
	if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
	
	vovel++;

	else if(s[i]>='a'&&s[i]<='z')constant++;
	else if(s[i]==' ')space++;
}
	cout<<"vovels:"<<vovel<< "\n";
	cout<<"constant:"<<constant<< "\n";
	cout<<"space:"<<space<< "\n";
	
	
	
}
int main(){
	string s="Take u forward is Awesome";
	int length=s.length();
	solve(s,length);
	return 0;
	
}
