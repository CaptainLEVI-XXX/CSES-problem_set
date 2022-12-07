#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
	int n;
	cin>>n;
	vector<int> books(n);
	for(int i=0;i<n;i++){
	    cin>>books[i];
	}
	int sum=0;
	sort(books.begin(),books.end());
	for(int i=0;i<n;i++){
	    sum+=books[i];
	}
	cout<<max(sum,2*books[n-1]);
    
}

