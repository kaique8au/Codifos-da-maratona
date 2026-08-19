#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,m,x,y,z;
    cin>>n>>m;
    vector<vector<pair<int,double>>> adj(n);
    for(int i=0; i<m; i++){
        cin>>x>>y>>z;x--;y--;
        adj[x].emplace_back(y,log(z)/log(7));
        adj[y].emplace_back(x,log(z)/log(7));
    }
    priority_queue< pair<double,int>,vector<pair<double,int>>, greater<pair<double,int>>> pq;
    vector<double> dis(n,1e18);
    pq.emplace(0,0);
    dis[0]=0;
    while(!pq.empty()){
        auto[ad,at]=pq.top();
        pq.pop();
        if(ad>dis[at])continue;
        for(auto[bt,d]:adj[at]){
            double bd=ad+d;
            if(dis[bt]>bd){
                dis[bt]=bd;
                pq.emplace(bd,bt);
            }
        }
    }
    cout<<fixed<<setprecision(15)<<dis[n-1]<<'\n';
}