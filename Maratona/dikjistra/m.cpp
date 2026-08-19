#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int c;
    cin>>c;
    while(c--){
        int n,m,x,y,z;
        cin>>n>>m;
        vector<vector<pair<int,int>>> adj(n);
        for(int i=0; i<m; i++){
            cin>>x>>y>>z;x--;y--;
            adj[x].emplace_back(y,z);
            adj[y].emplace_back(x,z);
        }
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int> dis(n,1e18);
        pq.emplace(0,0);
        dis[0]=0;
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
        cout<<dis[n-1]<<'\n';
    }
}