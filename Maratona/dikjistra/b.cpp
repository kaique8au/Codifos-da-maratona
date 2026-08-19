#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,m,x,y,z;
    cin>>n>>m;
    vector<vector<pair<int,int>>> adj(n+1);
    for(int i=0; i<m; i++){
        cin>>x>>y>>z;
        adj[x].emplace_back(y,z);
        adj[y].emplace_back(x,z);
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector<int> dis(n+1,1e18),pai(n+1);
    pq.emplace(0,1);
    dis[1]=0;
    pai[1]=-1;
    while(!pq.empty()){
        auto[ad,at]=pq.top();
        pq.pop();
        if(ad>dis[at])continue;
        for(auto[bt,bd]:adj[at]){
            int d=ad+bd;
            if(dis[bt]>d){
                dis[bt]=d;
                pai[bt]=at;
                pq.emplace(d,bt);
            }
        }
    }
    if(dis[n]==1e18)cout<<"impossible\n";
    else{
        vector<int> c;
        c.push_back(1);
        for(int i=1; pai[i]!=-1; i=pai[i])c.push_back(pai[i]);
        for(int i=c.size()-1; i>=0; i--)cout<<c[i]<<((i==0)?'\n':' ');
    }
}