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
void Uppertolower(char arr[]){
	int n=strlen(arr);
	int i=0;
	while(i<n){
		arr[i]=arr[i]-'A'+'a';  
		i++;
	}
}



int main(){
	char ch[100];
	//cin>>ch;
	cin.getline(ch,100);
	Uppertolower(ch);
	cout<<"after conversion : "<<ch;
     return 0;
     	
}
