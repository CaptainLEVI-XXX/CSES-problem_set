#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
void solve(){
	int n;
	cin>>n;
	if((n*(n+1)) % 4 != 0){
		cout<<0;
		return ;
	}
	int sum = (n*(n+1))/4 ;
	int dp[n+1][sum+1];
	dp[1][1] = 1;
	dp[1][0] = 0;
	for(int i=2;i<=sum;i++){
		dp[1][i]=0;
	}
	for(int i=2;i<=n;i++){
		for(int j=0;j<=sum;j++){
			if(i > j){
				dp[i][j] = dp[i-1][j] % M;
			}else{
				dp[i][j] = (dp[i-1][j-i] % M  + dp[i-1][j] % M) % M ;
			}
		}
	}
	cout<<dp[n][sum];
	return;
}
signed main(){
	solve();
}