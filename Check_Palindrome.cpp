// #include <bits/stdc++.h> 
// char tolowercase(string str){
//   if(str>='a'&&str<='z'){
//       return ch;
//   }
//   else{
//       string temp=str-'A'+'a';
//       return temp;
//   }


// }
// bool checkPalindrome(string s)
// {
//     // Write your code here.
//     int st=0;
//     int e=s.size()-1;
//     while(s<=e){
//         if(tolowercase(s[st])!=tolowercase(s[e])){
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }

//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S) {
	    // Your code goes here
	    int left = 0;
        int right = S.length() - 1;

        while (left < right) {
            if (S[left] != S[right]) {
                return 0;            // Not a palindrome
            }
            left++;
            right--;
        }

        return 1;              // palindrome
	}
};        
