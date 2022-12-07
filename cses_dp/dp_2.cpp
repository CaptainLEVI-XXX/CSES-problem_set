#include<bits/stdc++.h>
#define int long long int
using namespace std;
#define M 1000000007
signed main(){
    int n,sum;
    cin>>n>>sum;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    vector<int> dp(sum+1,INT_MAX);
    dp[0]=0;
    for(int i=1;i<=sum;i++){
        for(int j=0;j<n;j++){
            if(i-vec[j]>=0){
            dp[i]=min(dp[i],dp[i-vec[j]] +1);
                
            }
        }
    }
    cout<<(dp[sum]!=INT_MAX ? dp[sum] : -1 );
}   

            