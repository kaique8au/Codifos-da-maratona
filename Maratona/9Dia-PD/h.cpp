#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
signed main(){ios
    int n,m;
    cin>>n>>m;
    vector<string> adj(n);
    vector<vector<int>> pd(n+1,vector<int>(m+1));
    for(auto &k:adj)cin>>k;
    pd[1][0]=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(adj[i-1][j-1]=='.')pd[i][j]=(pd[i-1][j]+pd[i][j-1])%(1000000007);
        }
    }
    cout<<pd[n][m]<<'\n';
}