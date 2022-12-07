#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
	int n;
	cin>>n;
	vector<pair<int,int> > arr(n);
	for(int i=0;i<n;i++){
		
		cin>>arr[i].first;
		cin>>arr[i].second;
	}
	sort(arr.begin(),arr.end());
	
	int totaltime=0, profit=0;
	for(int i=0;i<n;i++){
		totaltime+=arr[i].first;
		profit+= arr[i].second-totaltime;
	}
	cout<<profit;
}

