#include<bits/stdc++.h>
#define int long long int
using namespace std;
#define M 1000000007
int dp[1000001][2];
void solve(){
    dp[1][0]=1;
    dp[1][1]=1;
    for(int i=2;i<=1000000;i++){
        dp[i][0]=(2*dp[i-1][0] + dp[i-1][1])%M;
        dp[i][1]=(dp[i-1][0] + 4*dp[i-1][1])%M;
    }
}
signed main(){
    solve();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<(dp[n][0]+dp[n][1])%M;
        cout<<endl;
    }
}
