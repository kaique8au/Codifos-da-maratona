#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int c;
    cin>>c;
    for(int cc=1; cc<=c; cc++){
        cout<<"Case #"<<cc<<": ";
        int n,m,s,t,x,y,z;
        cin>>n>>m>>s>>t;
        vector<vector<pair<int,int>>> adj(n);
        for(int i=0; i<m; i++){
            cin>>x>>y>>z;
            adj[x].emplace_back(y,z);
            adj[y].emplace_back(x,z);
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int> dis(n,1e18);
        pq.emplace(0,s);
        dis[s]=0;
        while(!pq.empty()){
            auto[ad,at]=pq.top();
            pq.pop();
            if(ad>dis[at])continue;
            for(auto[bt,d]:adj[at]){
                int bd=ad+d;
                if(dis[bt]>bd){
                    dis[bt]=bd;
                    pq.emplace(bd,bt);
                }
            }
        }
        if(dis[t]==1e18)cout<<"unreachable\n";
        else cout<<dis[t]<<'\n';
    }
}