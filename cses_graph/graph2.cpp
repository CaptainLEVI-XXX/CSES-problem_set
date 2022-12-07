#include<bits/stdc++.h>
#define int long long int
using namespace std; 
void dfs(vector<vector<char>>& grid,  vector<vector<bool>>& visited,
         int i,int j,int n,int m,string output,vector<string>& ans){
    
   if(i<0 || j<0 || i>n-1 || j>m-1 || visited[i][j]==true || grid[i][j]=='#'){
       return;
   }    
   if(grid[i][j]=='B'){
       ans.push_back(output);
       return;
   }
   else{
       visited[i][j]=true;
   }
   output.push_back('D');
   dfs(grid,visited,i+1,j,n,m,output,ans);
   output.pop_back();
   output.push_back('U');
   dfs(grid,visited,i-1,j,n,m,output,ans);
   output.pop_back();
   output.push_back('R');
   dfs(grid,visited,i,j+1,n,m,output,ans);
   output.pop_back();
   output.push_back('L');
   dfs(grid,visited,i,j-1,n,m,output,ans);
   output.pop_back();
   
   return;
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
   string output="";
   vector<string> ans;
    vector<vector<bool>> visited(n,vector<bool> (m,false));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='A'){
                dfs(grid,visited,i,j,n,m,output,ans);
            }
        }
    }   
    sort(ans.begin(),ans.end());
    //for(auto x:ans) cout<<x<<endl;
    if(ans.size()==0){
        cout<<"NO";
        return;
    }
    cout<<"YES\n";
    cout<<ans[0].length()<<"\n"<<ans[0];
    return;
}
signed main(){
    solve();
}