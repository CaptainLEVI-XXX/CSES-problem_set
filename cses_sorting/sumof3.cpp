#include<bits/stdc++.h>
#define int long long int
using namespace std;

signed main(){
	int n,x;
	cin>>n>>x;
	vector<pair<int,int>> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i].first;
		arr[i].second=i;
		
	}
	sort(arr.begin(),arr.end());
	int firstIndex=-1,secondIndex=-1,thirdIndex=-1;
	for(int i=0;i<n;i++){
		
		int sum=x-arr[i].first;
		int s=0,e=n-1;
		while(s<e){
			if(arr[s].first + arr[e].first == sum && s!=i && e!=i){
				secondIndex=arr[s].second + 1 ;
				thirdIndex=arr[e].second + 1 ;
				firstIndex=arr[i].second + 1;
				break;
			}
			else if(arr[s].first + arr[e].first > sum){
				e--;
			}
			else{
				s++;
			}
		}
		
	}
	if(secondIndex==-1){
		cout<<"IMPOSSIBLE";
	}
	else{
		cout<<firstIndex<<" "<<secondIndex<<" "<<thirdIndex;
	}
}
