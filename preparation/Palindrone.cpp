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
bool checkpal(char word[]){
	int i=0;
	int n=strlen(word);
	int end=n-1;
	while(i<end){
		if(word[i]!=word[end]){
			return false;
			
		}
		else{
			i++;
			end--;
		}
		
		
	
		
	}
		return true;
	
}

int main(){
	char ch[100];
	//cin>>ch;


cout<<"check pal "<<checkpal(ch);



     return 0;
     	
}
//class Solution{
//public:	
//	
//	
//	int isPalindrome(string S) {
//	    // Your code goes here
//	    int left = 0;
//        int right = S.length() - 1;
//
//        while (left < right) {
//            if (S[left] != S[right]) {
//                return 0;            // Not a palindrome
//            }
//            left++;
//            right--;
//        }
//
//        return 1;              // palindrome
//	}
//};    
