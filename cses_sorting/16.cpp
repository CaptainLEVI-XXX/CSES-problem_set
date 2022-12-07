#include<bits/stdc++.h>
#define int long long int 
using namespace std;
signed main(){
    int n,m;
    cin>>n>>m;
    set<int> lights;
    multiset<int> passage;
    lights.insert(0);
    lights.insert(n);
    passage.insert(n-0);
    while(m--){
        int x;
        cin>>x;
        lights.insert(x);
        auto it= lights.find(x);
        int preValue = *prev(it);
        int nextValue= *next(it);
        passage.erase(passage.find(nextValue-preValue));
        passage.insert(x-preValue);
        passage.insert(nextValue-x);
        cout<<*passage.rbegin()<<" ";  
    } 
}
