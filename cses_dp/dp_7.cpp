#include<bits/stdc++.h>
//#define int long long int
using namespace std;
#define M 1000000007
signed main(){
    int n,sum;
    cin>>n>>sum;
    vector<int> price(n+1),pages(n+1);
    for(int i=1;i<=n;i++){
        cin>>price[i];
    }
    for(int i=1;i<=n;i++){
        cin>>pages[i];
    }
    vector<vector<int>> dp(n+1,vector<int> (sum+1,0));
    for(int i=1;i<=n;i++){
        for(int x=1;x<=sum;x++){
            dp[i][x]=dp[i-1][x];
            if(x>=price[i]){
            dp[i][x]=max(dp[i][x], (pages[i] + dp[i-1][x-price[i]]) );
            }
        }
    }
    cout<<dp[n][sum];
}