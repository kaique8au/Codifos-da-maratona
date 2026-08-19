#include <bits/stdc++.h>
using namespace std;
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,x,y,md=0,p;
    cin>>n;
    vector<vector<int>> adj(n+1),q(2);
    for(int i=1; i<n; i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<bool> vis(n+1);
    auto dfs=[&](this auto && dfs, int at, int tipo)->void {
        vis[at]=true;
        q[tipo].push_back(at);
        tipo^=1;
        for(auto &bt:adj[at]){
            if(!vis[bt])dfs(bt,tipo);
        }
    };
    dfs(1,0);
    cout<<q[0].size()*q[1].size()-n+1<<'\n';
}