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
void removespace(char sen[]){
	int n=strlen(sen);
	//cout<<n;
	int i=0;
  for(i=0;i<n;i++){
  	if(sen[i]==' '){// == for check
  		sen[i]='@';// = dalne k waste smaje kay 
	  }
  }
	
	
}
int main(){
	char ch[100];
	//cin>>ch;
	cin.getline(ch,100);
	removespace(ch);
     cout<<"now printing"<<endl<<ch<<endl;
cout<<"lengtn of string is : "<<strlen(ch);


     return 0;
     	
}
