#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y,z;
        cin>>n>>m;
        vector<vector<int>> adj(n,vector<int>(m));
        for(auto & i:adj)for(auto & j:i)cin>>j;
        priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> pq;
        vector<vector<int>> dis(n,vector<int>(m,1e18));
        pq.emplace(adj[0][0],0,0);
        dis[0][0]=adj[0][0];
        while(!pq.empty()){
            auto[ad,ai,aj]=pq.top();
            pq.pop();
            if(ad>dis[ai][aj])continue;
            int add[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
            for(auto[bi,bj]:add){
                bi+=ai;
                bj+=aj;
                if(bi<n && bi>=0 && bj<m && bj>=0){
                    int bd=ad+adj[bi][bj];
                    if(dis[bi][bj]>bd){
                        dis[bi][bj]=bd;
                        pq.emplace(bd,bi,bj);
                    }
                }
            }
        }
        cout<<dis[n-1][m-1]<<'\n';
    }
}