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
        cin>>x>>y>>z;x--;y--;
        adj[x].emplace_back(y,z);
    }
    priority_queue< tuple<int,int,int>,vector<tuple<int,int,int>>, greater<tuple<int,int,int>>> pq;
    vector<vector<int>> dis(n,vector<int>(2,1e18));
    pq.emplace(0,0,0);
    dis[0][0]=0;
    while(!pq.empty()){
        auto[ad,at,c]=pq.top();
        pq.pop();
        if(ad>dis[at][c])continue;
        for(auto[bt,d]:adj[at]){
            int bd=ad+d;
            if(!c){
                int bdc=ad+d/2;
                if(dis[bt][1]>bdc){
                    dis[bt][1]=bdc;
                    pq.emplace(bdc,bt,1);
                }
                if(dis[bt][0]>bd){
                    dis[bt][0]=bd;
                    pq.emplace(bd,bt,0);
                }
            }else{
                if(dis[bt][1]>bd){
                    dis[bt][1]=bd;
                    pq.emplace(bd,bt,1);
                }
            }
        }
    }
    cout<<dis[n-1][1]<<'\n';
}