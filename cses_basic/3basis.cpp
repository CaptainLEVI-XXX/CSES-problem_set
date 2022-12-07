#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
	
	string s;
	cin>>s;
	int count=1,maxi=INT_MIN;
	for(int i=0;i<s.length();i++){
		if(s[i+1]==s[i]){
			count++;
		}
		else{
			count=1;
		}
		maxi=max(maxi,count);
	}
	cout<<maxi;
	
 }
