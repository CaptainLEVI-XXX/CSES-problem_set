#include<bits/stdc++.h>
#define int long long int
using namespace std;
#define M 1000000007

signed main(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> numbers;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        numbers.push_back({x,i});
    }
    sort(numbers.begin(),numbers.end()); 
    while(m--){
        int a,b;
        cin>>a>>b;                  
        for(int i=0;i<n;i++){                         
           if(numbers[i].second == a-1){
               numbers[i].second=b-1;
           }                                       
           else if(numbers[i].second == b-1){
               numbers[i].second=a-1;
           }
        }                                     
        int lastPos=-1,count=0;
        for(int i=0;i<n;i++){
             if( numbers[i].second-lastPos < 0 ){
            count++;
            }
        lastPos=numbers[i].second;
        }
        cout<<count+1<<endl;
    }
}