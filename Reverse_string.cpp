#include<iostream>
using namespace std;
void reverse(char ch[],int n){
	int s=0;
	int e=n-1;
	while(s<e){
		swap(ch[s++],ch[e--]);
	}
}
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
	cout<<ch<<endl;
//	return 0;
	cout<<"length is"<<stringlength(ch)<<endl;
	int n=stringlength(ch);
	cout<<"after reverse string look lile"<<endl;
	reverse(ch,n);
	cout<<ch;
	return 0;
	
}
