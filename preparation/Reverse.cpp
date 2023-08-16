#include<iostream>
using namespace std;
void rever(char ch[],int n){
	int s=0;
	//int end=getlength(ch)-1;
	int e=n-1;
	while(s<=e){
		swap(ch[s++],ch[e--]);
	}
}
int getlength(char ch[]){
	int count =0;
	int i=0;
	while(ch[i]!='\0'){
		count++;
		i++;
	}
	return count;
}
int main(){
	char ch[20];
	
	cout<<"enter the name"<<endl;
	cin>>ch;
	cout<<"your name is"<<endl;
	cout<<ch<<endl;
   int length=getlength(ch);
	cout<<"length is"<<length<<endl;
  // cout<<"len is "<<getlength(ch)<<endl;
   cout<<"original  "<<ch<<endl;
  cout<<"after the reverse"<<endl;
  rever(ch,length);
  cout<<ch;
   
	return 0;

}
