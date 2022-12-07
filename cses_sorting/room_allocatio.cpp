#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
	int n;
	cin>>n;
	vector<pair<int , pair<int,int>>> vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i].first;
		cin>>vec[i].second.first;
		vec[i].second.second=i;
	}
	priority_queue<pair<int ,int> ,vector<pair<int,int>> ,greater<pair<int,int>> > pq;
	
	sort(vec.begin(),vec.end());
	int ans[n];
	int rooms=1;	
	ans[vec[0].second.second]=rooms;
	pq.push({vec[0].second.first,rooms});
	
	
	for(int i=1;i<n;i++){
		pair<int,int> top=pq.top();
		
		if(vec[i].first > top.first){
			int usedRoom=top.second;
			pq.pop();
			pq.push({vec[i].second.first,usedRoom});
			ans[vec[i].second.second]=usedRoom;
			
		}
		else{
			rooms++;
			ans[vec[i].second.second]=rooms;
			pq.push({vec[i].second.first,rooms});
		}
	}
	 cout<<pq.size()<<endl;
	 for(auto x:ans){
 		cout<<x<<" ";
 	}
}
