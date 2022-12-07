#include<bits/stdc++.h>
#define int long long int
using namespace std;
#define M 1000000007

signed main(){
    int n;
    cin>>n;
    vector<int> coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    sort(coins.begin(),coins.end());
    int maxSum=0,ans=-1;
    for(int i=0;i<n;i++){
        if( (maxSum+1) - coins[i] < 0 ){    
            ans=maxSum+1;
            break;
        }
        maxSum+=coins[i];
    }
    if(ans==-1){
        cout<<maxSum+1;
    }
    else
    cout<<ans;
}
    
    