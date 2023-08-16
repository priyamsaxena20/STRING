#include<iostream>
using namespace std;
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
//	int length=getlength(ch);
//	cout<<"length is"<<length<<endl;
   cout<<"len is "<<getlength(ch);
	return 0;

}
