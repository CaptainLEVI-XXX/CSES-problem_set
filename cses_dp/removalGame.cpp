#include<bits/stdc++.h>
#define int long long int
using namespace std;
int solve2(vector<int>&vec,int index,int n, vector<int>& dp){
	if(index>=n){
		return 0;
	}
	if(dp[index]!=INT_MIN){
		return dp[index];
	}
	int ans1=0;
	ans1 = vec[index] + solve2(vec,index+2,n, dp);
	return dp[index]=ans1;
}
void solve(){
	int n;
	cin>>n;
	vector<int> vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
    }
	vector<int> dp(n+1,INT_MIN);
	int ans1=solve2(vec,0,n,dp);
	vector<int> dp2(n+1,INT_MIN);
	int ans2=solve2(vec,1,n,dp);
	cout<<max(ans1,ans2);	
	return;
	
}
signed main(){
	solve();
}