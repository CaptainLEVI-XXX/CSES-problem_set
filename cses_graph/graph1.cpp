#include<bits/stdc++.h>
#define int long long int
using namespace std; 

void dfs(vector<vector<char>>& grid,  vector<vector<bool>>& visited,int i,int j,int n,int m){
    
   if(i<0 || j<0 || i>n-1 || j>m-1 || visited[i][j]==true || grid[i][j]=='#'){
       return;
   }    
   visited[i][j]=true;
   dfs(grid,visited,i+1,j,n,m);
   dfs(grid,visited,i-1,j,n,m);
   dfs(grid,visited,i,j+1,n,m);
   dfs(grid,visited,i,j-1,n,m);
}

void solve(){
    
    int n,m;
    cin>>n>>m;
    vector<vector<char>> grid(n,vector<char> (m) );
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
   
    vector<vector<bool>> visited(n,vector<bool> (m,false));
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!visited[i][j] && grid[i][j]=='.'){
                dfs(grid,visited,i,j,n,m);
                count++;
            }
        }
    }   
    cout<<count;
    return;
}
signed main(){
    solve();
}