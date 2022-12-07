#include<bits/stdc++.h>
#define M 1000000007
#define int long long int
using namespace std;
signed main(){
    int n,m;
    cin>>n>>m;
    set<int> lights;
    lights.insert(n);
    while(m--){
        int x;
        cin>>x;
        lights.insert(x);
        int longestP=0,lastele=0;
        for(auto x : lights){
            longestP=max(longestP,x-lastele);
            lastele=x;
        }
        cout<<longestP<<" ";
    }
}   