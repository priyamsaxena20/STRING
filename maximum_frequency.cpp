#include <bits/stdc++.h> 
char mostFrequentChar(string &s)
{
	// Write your code here.
	  map<char,int> mpp;
        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
        }
        int mx=0;
        int ans;
        for(auto it: mpp){
            if(it.second  >mx){
                ans=it.first;
                mx=it.second;
            }
        }
        return ans;
}
