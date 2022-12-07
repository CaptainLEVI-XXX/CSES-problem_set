#include<bits/stdc++.h>
#define int long long int
using namespace std;
#define M 1000000007
 int solve(int n,int i,int j,vector<vector<char>> &mat,vector<vector<int>> &dp){
        if(i==n-1 && j==n-1){
            return 1;
        }
        if( i>=n || j>=n ){
            return 0;
        }
        if(mat[i][j]=='*'){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        dp[i][j]=(solve(n,i+1,j,mat,dp)+solve(n,i,j+1,mat,dp))%M;
        return dp[i][j];
    }
    int NumberOfPath(vector<vector<char>> &mat,int n)
    {
        if(mat[0][0]=='*' || mat[n-1][n-1]=='*'){
            return 0;
        }
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return solve(n,0,0,mat,dp);
    }
signed main(){
    int n;
    cin>>n;
    vector<vector<char>> mat(n,vector<char>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    cout<<NumberOfPath(mat,n);
    
    //vector<vector<int>> dp(n+1,vector<int> (n+1,0));
    //dp[0][0]=1;
    
}
    
    