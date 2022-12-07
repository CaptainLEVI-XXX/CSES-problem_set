#include<bits/stdc++.h>
#define int long long int
using namespace std;
#define M 1000000007

signed main(){
    int n;
    cin>>n;
    vector<int> length(n);
    for(int i=0;i<n;i++){
        cin>>length[i];
    }
    sort(length.begin(),length.end());
    int median=n/2;    // 0 base indexing array
    int cost=0;
    for(int i=0;i<n;i++){
        cost+=abs(length[median]-length[i]);
    }
    cout<<cost;
}