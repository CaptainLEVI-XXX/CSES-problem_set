#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define M 1000000007
signed main(){
    int n;
    cin>>n;
    vector<ll> dp(n+1,0);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        dp[i]=0;
        for(int j=1;j<=6;j++){
            if(i-j>=0){
            dp[i]=(dp[i]%M + dp[i-j]%M)%M;
        }
            
        }
    }
    cout<<dp[n]%M;
}