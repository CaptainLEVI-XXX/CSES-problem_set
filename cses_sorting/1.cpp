#include<bits/stdc++.h>
#define int long long int
using namespace std;
#define M 1000000007

signed main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        mp[vec[i]]++;
    }
    cout<<mp.size();
}
    