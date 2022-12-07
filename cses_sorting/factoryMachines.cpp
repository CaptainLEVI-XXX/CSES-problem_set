#include<bits/stdc++.h>
#define int long long int
using namespace std;

bool isPossible(int &mid,vector<int>& time,int t){
	int sum=0;
	for(int i=0;i<time.size();i++){
		sum+=min(mid/time[i],(int)INT_MAX);
	}
	if(sum>=t) return 1;
	else return 0;
}

signed main(){
    int n,t;
	cin>>n>>t;
	vector<int> time(n);
	for(int i=0;i<n;i++){
		cin>>time[i];
	}
	
	//sort(time.begin(),time.end());
	int e=1e18,s=0;
	int ans=1e18;
	while(s<=e){
		int mid=s+(e-s)/2;
		if(isPossible(mid,time,t)){
			ans=mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	cout<<ans;	 	
} 
