#include<iostream>
using namespace std;
int stringlength(char ch[]){
	int cnt=0;
	for(int i=0;ch[i]!='\0';i++){
		cnt++;
	}
	return cnt;
	
	
	
	
	
}
int main(){
	char ch[20];
	cout<<"enter your name"<<endl;
	cin>>ch;
	cout<<"your name is"<<endl;
	cout<<ch;
//	return 0;
	cout<<"length is"<<stringlength(ch);
	return 0;
	
}
