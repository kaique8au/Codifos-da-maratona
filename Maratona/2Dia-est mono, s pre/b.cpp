//tomei tle soma de prefixo 2d
#include <bits/stdc++.h>
using namespace std;
#define int long long
void save(){
    int n,q,x,y,h,w,hm,wm;
    cin>>n>>q;
    vector<vector<int>> v(1001,vector<int>(1001,0)), sp(1001,vector<int>(1001,0));
    for(int i=0; i<n; i++){
        cin>>x>>y;
        v[x][y]+=x*y;
    }
    for(int i=1; i<=1000; i++){
        for(int j=1; j<=1000; j++){
            sp[i][j]=sp[i-1][j]+sp[i][j-1]-sp[i-1][j-1]+v[i][j];
        }
    }
    while(q--){
        cin>>h>>w>>hm>>wm;
        cout<<sp[hm-1][wm-1]+sp[h][w]-sp[hm-1][w]-sp[h][wm-1]<<'\n';
    }
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n;
    cin>>n;
    while(n--)save();
}