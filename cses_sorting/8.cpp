#include<bits/stdc++.h>
#define int long long int
using namespace std;
#define M 1000000007

signed main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int curr_sum=vec[0];
    int max_sum=vec[0];
    for(int i=1;i<n;i++){
        curr_sum=max(vec[i],curr_sum + vec[i]);
        max_sum=max(curr_sum,max_sum);
     }
     cout<<max_sum;
    
    
}      