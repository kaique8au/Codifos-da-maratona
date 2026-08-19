#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<string> adj(n);
    for(auto &k:adj)cin>>k;
    vector<vector<bool>> vis(n,vector<bool>(m,false));
    int add[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
    bool ver=false;
    auto dfs=[&](this auto && dfs, int ai, int aj, int pi, int pj, char tipo)->void {
        vis[ai][aj]=true;
        for(auto&[i,j]:add){
            int bi=ai+i;
            int bj=aj+j;
            if(bi>=0 && bi<n && bj>=0 && bj<m && adj[bi][bj]==tipo){
                if(!vis[bi][bj])dfs(bi,bj,ai,aj,tipo);
                else if(pi!=bi && pj!=bj)ver=true;
            }
        }
    };
    for(int i=0; i<n && !ver; i++){
        for(int j=0; j<m && !ver; j++){
            if(!vis[i][j])dfs(i,j,-1,-1,adj[i][j]);
        }
    }
    if(ver)cout<<"Yes\n";
    else cout<<"No\n";
}