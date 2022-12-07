#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
	
	int n;
	cin>>n;
	vector<bool> arr(n+1,0);
	for(int i=1;i<=n-1;i++){
		int x;
		cin>>x;
		arr[x]=1;
	}
	for(int i=1;i<=n;i++){
		if(arr[i]==0) {
		cout<<i; break;}
	}
 }

