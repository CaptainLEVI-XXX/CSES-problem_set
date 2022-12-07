#include<bits/stdc++.h>
//#define int long long int
#define M 1000000007
using namespace std;

int main(){
    int n;
    cin>>n;
    multiset<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        auto it=arr.upper_bound(x);
        if(it==arr.end()){
            arr.insert(x);
        }else{
            arr.erase(it);
            arr.insert(x);
        }
    }
    cout<<arr.size();
    return 0;
}