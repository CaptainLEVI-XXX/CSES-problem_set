#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
	
	int n;
	cin>>n;
	vector<int> vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	int move=0;
	for(int i=1;i<n;i++){
		if(vec[i] < vec[i-1]){
	    	move+= vec[i-1] - vec[i];
			vec[i]=vec[i-1];
		}
	}
	cout<<move;
 }
