#include<bits/stdc++.h>
#define int long long int
using namespace std;
#define M 1000000007
signed main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,INT_MAX);
    dp[0]=0;
    for(int num=1;num<=n;num++){
        int temp=num;
        while(temp > 0 ){
            dp[num]=min(dp[num],dp[num-temp%10]+1);
            temp=temp/10;
        }
    }
    cout<<dp[n];
    
}
    
    