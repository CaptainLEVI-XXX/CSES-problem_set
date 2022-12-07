#include<bits/stdc++.h>
#define int long long int 
using namespace std;

bool isPossible(int &mid,vector<int>& vec,int& k){
	int count=1,sum=0;
	for(int i=0;i<vec.size();i++){
		if(sum + vec[i] > mid ){
			count++;
			sum=0;
		}	
		sum+=vec[i];
	}
	if(count > k ) return 0;
	else return 1;
}
signed main(){
	int n,k;
	cin>>n>>k;
	vector<int> vec(n);
	for(int i=0;i<n;i++){
	   cin>>vec[i];
	}
	int maxEle=0;
	for(int i=0;i<n;i++){
		maxEle=max(maxEle,vec[i]);
	}
	int s=maxEle,e=1e18,ans=1e18;
	while(s<=e){
		int mid=s+(e-s)/2;
		if(isPossible(mid,vec,k)==1){
			if(mid < ans){
			ans=mid;
			e=mid-1;
			}
		}else{
			s=mid+1;
		}
	}
   cout<<ans;
}