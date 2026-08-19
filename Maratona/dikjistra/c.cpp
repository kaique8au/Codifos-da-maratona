//dentro das verificacoes parar quando encontrar o 1 ou um no que ja tenha sido vencido 
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,m,x,y,z;
    cin>>n>>m;
    vector<vector<pair<int,int>>> adj(n);
    for(int i=0; i<m; i++){
        cin>>x>>y>>z;
        adj[x].emplace_back(y,z);
        adj[y].emplace_back(x,z);
    }
    vector<pair<int,int>> vis(n);
    vector<bool> ver(n);
    ver[1]=true;
    for(int i=0; i<n; i++){
        if(ver[i])continue;
        if(adj[i].size()<2){
            ver[i]=true;
            vis[i]={adj[i][0].first,adj[i][0].second};
            continue;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<pair<int,int>> pai(n);
        vector<int> dis(n,1e18);
        pq.emplace(0,i);
        dis[i]=0;
        pai[i]={-1,0};
        while(!pq.empty()){
            auto[ad,at]=pq.top();
            pq.pop();
            if(ad>dis[at])continue;
            for(auto[bt,bd]:adj[at]){
                int d=ad+bd;
                if(dis[bt]>d){
                    dis[bt]=d;
                    pai[bt]={at,bd};
                    pq.emplace(d,bt);
                }
            }
        }
        vector<tuple<int,int,int>> c;
        for(int j=1; pai[j].first!=-1; j=pai[j].first)c.emplace_back(pai[j].first,j,pai[j].second);
        for(auto & [at,bt,bd] : c | views::reverse){
            if(!ver[at]){
                ver[at]=true;
                vis[at]={bt,bd};
            }
        }
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector<int> dis(n,1e18),pai(n,1e18);
    pq.emplace(0,0);
    dis[0]=0;
    pai[0]=-1;
    while(!pq.empty()){
        auto[ad,at]=pq.top();
        pq.pop();
        if(ad>dis[at])continue;
        for(auto[bt,bd]:adj[at]){
            if(vis[at].first==bt && vis[at].second==bd)continue;
            int d=ad+bd;
            if(dis[bt]>d){
                dis[bt]=d;
                pai[bt]=at;
                pq.emplace(d,bt);
            }
        }
    }
    if(dis[1]==1e18)cout<<"impossible\n";
    else{
        vector<int> c;
        c.push_back(1);
        for(int i=1; pai[i]!=-1; i=pai[i])c.push_back(pai[i]);
        cout<<c.size()<<' ';
        for(int i=c.size()-1; i>=0; i--)cout<<c[i]<<((i==0)?'\n':' ');
    }
}