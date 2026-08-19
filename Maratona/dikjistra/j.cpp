//ainda despois de vericar o caminho mais curto, mesmo depois de ter criado o caminho ideal para ele
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,m,l,s,t,x,y,z;
    cin>>n>>m>>l>>s>>t;
    vector<vector<pair<int,int>>> adj(n);
    vector<tuple<int,int,int>> sss(m);
    for(int i=0; i<m; i++){
        cin>>x>>y>>z;
        adj[x].emplace_back(y,z);
        adj[y].emplace_back(x,z);
        sss[i]={x,y,z};
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector<pair<int,int>> pai(n);
    vector<int> dis(n,1e18);
    pq.emplace(0,s);
    pai[s]={-1,0};
    dis[s]=0;
    while(!pq.empty()){
        auto[ad,at]=pq.top();
        pq.pop();
        if(ad>dis[at])continue;
        for(auto[bt,bd]:adj[at]){
            int d=ad+bd;
            if(dis[bt]>d){
                pq.emplace(d,bt);
                pai[bt]={at,bd};
                dis[bt]=d;
            }
        }
    }
    if(dis[t]==1e18)cout<<"NO\n";
    else{
        if(dis[t]==l)for(auto&[aa,bb,cc]:sss)cout<<aa<<' '<<bb<<' '<<cc<<'\n';
        else{
            if(dis[t]<l){
                vector<tuple<int,int,int>> c;
                vector<pair<int,int>> vp;
                for(int j=t; pai[j].first!=-1; j=pai[j].first)c.emplace_back(pai[j].first,j,pai[j].second);
                for(auto & [at,bt,bd] : c | views::reverse)if(!bd)vp.emplace_back(at,bt);
                if(vp.empty())cout<<"NO\n";
                else{
                    cout<<"YES\n";
                    for(auto&[aa,bb,cc]:sss){
                        bool vv=true;
                        if(!cc){
                            bool vvv=false;
                            for(auto&[at,bt]:vp){
                                if((aa==at||bb==at)&&(aa==bt||bb==bt)){
                                    vvv=true;
                                    break;
                                }
                            }
                            if(vvv){
                                if(vv){
                                    cc=l-dis[t];
                                    vv=false;
                                }
                            }else cc=1e18;
                        }
                        cout<<aa<<' '<<bb<<' '<<cc<<'\n';
                    }
                }
            }else cout<<"NO\n";
        }
    }
}