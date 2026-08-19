#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,m,k,x,y,z;
    cin>>n>>m>>k;
    vector<vector<pair<int,int>>> adj(n);
    for(int i=0; i<m; i++){
        cin>>x>>y>>z;x--;y--;
        adj[x].emplace_back(y,z);
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector<vector<int>> dis(n);
    pq.emplace(0,0);
    while(dis[n-1].size()<k){
        auto[ad,at]=pq.top();
        pq.pop();
        if(dis[at].size()>k)continue;
        dis[at].push_back(ad);
        for(auto[bt,d]:adj[at])pq.emplace(ad+d,bt);
    }
    for(int i=0; i<k; i++)cout<<dis[n-1][i]<<((i<k)?(' '):('\n'));
}