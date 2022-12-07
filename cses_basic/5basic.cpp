#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
	
	int n;
	cin>>n;
	if(n<=3 && n>1){
		cout<<"NO SOLUTION";
	}
	else{
	for(int i=1;i<=n;i++){
		if(i%2==0) cout<<i<<" ";
	}
	for(int i=1;i<=n;i++){
		if(i%2!=0) cout<<i<<" ";
	}
	}
	
	
 }
