#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
	int n,res=0,sum=0;
	cin>>n;
	vector<int> vec(n);
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++){
	   cin>>vec[i];
	}
	mp[0]++;
	for(int i=0;i<n;i++){
		sum+=vec[i] % n;
		sum=(sum+n) % n;
		res+=mp[sum];
		mp[sum]++;
	}
	cout<<res;
}
