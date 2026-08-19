#include <bits/stdc++.h>
using namespace std;
#define int long long
void save(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,q,y1,x1,y2,x2;
    cin>>n>>q;
    vector<string> adj(n);
    for(auto &k :adj)cin>>k;
    vector<vector<int>> sp(n+1,vector<int>(n+1));
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(adj[i-1][j-1]=='.')sp[i][j]=sp[i-1][j]+sp[i][j-1]-sp[i-1][j-1];
            else sp[i][j]=sp[i-1][j]+sp[i][j-1]-sp[i-1][j-1]+1;
        }
    }
    while(q--){
        cin>>x1>>y1>>x2>>y2;
        cout<<sp[x2][y2]+sp[x1-1][y1-1]-sp[x2][y1-1]-sp[x1-1][y2]<<'\n';
    }
    
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    save();
}