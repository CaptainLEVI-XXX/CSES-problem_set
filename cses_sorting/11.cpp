#include<bits/stdc++.h>
#define int long long int
using namespace std;
#define M 1000000007

signed main(){
    int n,count=0;
    cin>>n;
    vector<pair<int,int>> numbers;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        numbers.push_back({x,i});
    }
    sort(numbers.begin(),numbers.end());
    int lastPos=numbers[0].second;
    for(int i=1;i<n;i++){
        if( numbers[i].second-lastPos < 0 ){
         count++;
        }
        lastPos=numbers[i].second;
    }
    cout<<count+1;
}
        