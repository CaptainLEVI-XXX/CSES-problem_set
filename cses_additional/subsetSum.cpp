#include<bits/stdc++.h>
#define int long long int
using namespace std;
int solve(vector<int> &vec,int x,int n,int index,vector<vector<int> > &dp){
	if(x==0){
		if(index <= n){
			return 1;
		}else{
			return 0;
		}
	}
	if(x < 0) return 0;
	if(index>=n && x!=0) return 0;
	if(dp[index][x]!=-1){
		return dp[index][x];
	}
	dp[index][x]=0;
	int take=solve(vec,x-vec[index],n,index+1, dp);
	int not_take=solve(vec,x,n,index+1 ,dp);
	return dp[index][x] = take + not_take;
	
}
signed main(){
	int n,x;
	cin>>n>>x;
	vector<int> vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	vector<vector<int> > dp(n+1,vector<int> (x+1,-1));

	cout<<solve(vec,x,n,0,dp); 
		
}
