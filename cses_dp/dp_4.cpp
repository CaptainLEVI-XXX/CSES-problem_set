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
    vector<int> dp(sum+1,0);
    dp[0]=1;
    for(int i=0;i<n;i++){
        for(int value=1;value<=sum;value++){
            if(value-vec[i]>=0){
            dp[value]=(dp[value] + dp[value-vec[i]])%M;
            }
        }
    }
    
    cout<<dp[sum];
}