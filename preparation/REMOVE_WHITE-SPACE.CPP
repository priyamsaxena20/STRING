#include<iostream>
#include<string.h>
using namespace std;
string removespace(char str[]){
	int len=strlen(str);
	//cout<<len;
	int cnt=0;
	for(int i=0;i<len;i++){
		if(str[i]!=' '){
			str[cnt]=str[i];
			cnt++;
		}
		
		
	}
	str[cnt]='\0';
	return str;
	
}
int main(){
	char str[]="my name is khan";
	cout<<removespace(str);
	return 0;
}
