#include<bits/stdc++.h>
//#define int long long int
using namespace std;
struct range{
	int left,right,index;
};
bool compareRange(range i1, range i2)
{
	if(i1.left==i2.left)
	    return (i1.right > i2.right);
    return (i1.left < i2.left);
}

int main(){
    int n;
    cin>>n;
	
	vector<range> ranges(n);
	vector<int> contains1(n,0),contains2(n,0);
	for(int i=0;i<n;i++){
		cin>>ranges[i].left;
		cin>>ranges[i].right;
		ranges[i].index=i;
		
	}
	sort(ranges.begin(),ranges.end(),compareRange);
	int maxi_right=INT_MIN;
	for(int i=0;i<n;i++){
		if(ranges[i].right > maxi_right){
			contains2[ranges[i].index]=0;
			maxi_right=ranges[i].right;
		}else{
			contains2[ranges[i].index]=1;
		}
	}
	int mini_right=INT_MAX;
	for(int i=n-1;i>=0;i--){
		if(ranges[i].right < mini_right){
			contains1[ranges[i].index]=0;
			mini_right=ranges[i].right;
		}else{
			contains1[ranges[i].index]=1;
		}
	}
    for(auto x:contains1)
    	cout<<x<<" ";
	cout<<endl;
	for(auto x:contains2)
	    cout<<x<<" ";
		
	return 0;		
}