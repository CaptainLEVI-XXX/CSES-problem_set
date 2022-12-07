#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
    int n;
    cin>>n;
    vector<int> people(n);
    for(int i=0;i<n;i++){
       people[i]=i+1; 
    }
    while(people.size() > 1){
        
        vector<int> survivors;
        
        for(int i=0;i<people.size();i++){
            if(i%2!=0){
                cout<<people[i]<<" ";
            }else{
                survivors.push_back(people[i]);
            }
        }
        
        if(people.size()%2==0){
            people=survivors;
        }
        else{
            int start=survivors.back();
            survivors.pop_back();
            people=survivors;
            people.insert(people.begin(),start);
            
        }
    }
    cout<<people[0];
}