#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin>>t;
    for(int i=0; i<t;i++){
        if(i)cout<<'\n';
        int n,e,t,m,x,y,z,c=1;
        cin>>n>>e>>t>>m;
        vector<vector<pair<int,int>>> adj(n);
        for(int i=0; i<m; i++){
            cin>>x>>y>>z;x--;y--;
            adj[x].emplace_back(y,z);
        }
        for(int i=0; i<n; i++){
            if(i==e-1)continue;
            priority_queue< pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;
            vector<int> dis(n,1e18);
            pq.emplace(0,i);
            dis[i]=0;
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
            if(dis[e-1]<=t)c++;
        }
        cout<<c<<'\n';
    }
}