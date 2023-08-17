#include<iostream>
#include<string>

using namespace std;
int strlen(char ch[]){
	int i=0;
	int cnt =0;
	while(ch[i]!='\0'){
		cnt++;
		i++;
	}
	return cnt;	
}
void lowertoupper(char arr[]){
	int n=strlen(arr);
	int i=0;
	while(i<n){
		arr[i]=arr[i]-'a'+'A';
		i++;
	}
}



int main(){
	char ch[100];
	//cin>>ch;
	cin.getline(ch,100);
	lowertoupper(ch);
	cout<<"after conversion : "<<ch;
     return 0;
     	
}
