#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
	
	int n;
	cin>>n;
	
	vector<int> vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
		
	} 
	stack<pair<int,int>> stk;
	for(int i=0;i<n;i++){
		while(stk.size() > 0 && vec[i] <= stk.top().first )
			stk.pop();
		if(stk.size() > 0) cout<<stk.top().second<<" ";
		else cout<<0<<" ";
		stk.push({vec[i],i+1});
	}
	
	
}