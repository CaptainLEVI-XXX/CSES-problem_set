#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
	int n,k;
	cin>>n>>k;
	vector<int> vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	multiset<int> check;
	for(int i=0;i<k;i++){
		check.insert(vec[i]);
	}
	int i=0,j=k-1;
    while(j<n){
		const size_t cs = check.size();
        auto iter = check.begin();
		if(cs % 2!=0){
			advance(iter, cs/2 );
		}else{
			advance(iter,cs/2 -1);
		}
        cout<<*iter<<" ";
		check.erase(check.find(vec[i]));
		i++;j++;
		check.insert(vec[j]);
	}
		
}