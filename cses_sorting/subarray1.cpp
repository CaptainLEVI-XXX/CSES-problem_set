#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
	int n,x;
	cin>>n>>x;
	vector<int> vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	int sum=0,res=0;
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++){
		sum+=vec[i];
		if(sum==x) res++;
		if( mp.find(sum-x)!=mp.end() ){
			res+=mp[sum-x];
		}
		mp[sum]++;
	}
	cout<<res;
}