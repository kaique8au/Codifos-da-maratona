#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
void save(){ ios
    int n,m,q,x,y;
    cin>>n>>m>>q;
    vector<string> adj(n);
    vector<vector<int>> vis(n,vector<int>(m,0));
    vector<int> qua(q+1);
    for(auto &k:adj)cin>>k;
    auto dfs=[&](this auto && dfs, int ai, int aj, int v)->int {
        vis[ai][aj]=v;
        int add[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
        int s=0;
        for(auto&[i,j]:add){
            int bi=ai+i;
            int bj=aj+j;
            if(bi>=0 && bi<n && bj>=0 && bj<m){
                if(adj[bi][bj]=='*')s++;
                else if(!vis[bi][bj])s+=dfs(bi,bj,v);
            }
        }
        return s;
    };
    for(int i=1; i<=q; i++){
        cin>>x>>y;x--;y--;
        if(vis[x][y])cout<<qua[vis[x][y]]<<'\n';
        else{
            qua[i]=dfs(x,y,i);
            cout<<qua[i]<<'\n';
        }
    }
}
signed main(){ ios
    save();
}