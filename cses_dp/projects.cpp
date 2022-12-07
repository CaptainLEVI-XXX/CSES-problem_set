#include<bits/stdc++.h>
#define int long long int
using namespace std;


int solve2(vector<pair<pair<int,int>,int>> &arr,int index,int n,int endDay){
	if(index>=n){
		return 0;
	}
	int ans=0;
	if( index!=n-1 && endDay < arr[index].first.first  ){
		ans = arr[index].second + solve2(arr,index+1,n,arr[index].first.second);
	}
	else{
		ans = solve2(arr,index+1,n,endDay);
	}
	return ans;
	
}
void solve(){
	int n;
	cin>>n;
	vector<pair<pair<int,int>,int>> arr(n);
    for(int i=0;i<n;i++){
		cin>>arr[i].first.first;
		cin>>arr[i].first.second;
		cin>>arr[i].second;
	}
	sort(arr.begin(),arr.end());
	int maxi=INT_MIN;
	for(int i=0;i<n;i++){
	maxi=max(maxi,solve2(arr,i,n,0));
	}
	cout<<maxi;

}
signed main(){
	solve();
}