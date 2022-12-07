#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	vector<int> vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	vector<int> ans;
	ans.push_back(vec[0]);
	for(int i=1;i<n;i++){
		if( vec[i] > ans.back() ){
			ans.push_back(vec[i]);
		}
		else{
			int index = lower_bound(ans.begin(),ans.end(),vec[i])-ans.begin();
		    ans[index]= vec[i];
		}
	}
	cout<<ans.size();
	return;
}
signed main(){
	solve();
}