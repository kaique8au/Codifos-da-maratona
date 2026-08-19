#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
signed main(){ios
    int n,m,x,y;
    cin>>n>>m;
    vector<vector<int>> adj(n+1);
    for(int i=0; i<m; i++){
        cin>>x>>y;
        adj[x].push_back(y);
    }
    vector<int> pd(n+1,-1);
    auto dp=[&](this auto && dp,int at){
        if(pd[at]!=-1)return pd[at];
        pd[at]=0;
        for(auto &bt:adj[at]){
            pd[at]=max(pd[at],dp(bt)+1);
        }
        return pd[at];
    };
    int ma2=0;
    for(int i=1; i<=n; i++){
        ma2=max(ma2,dp(i));
    }
    cout<<ma2<<'\n';
}