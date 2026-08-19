#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,q,x,y;
    cin>>n>>q;
    vector<int> v(n+1,0);
    for(int i=1; i<=n; i++){
        cin>>x;
        v[i]=v[i-1]+x;
    }
    while(q--){
        cin>>x>>y;
        cout<<v[y]-v[x-1]<<'\n';
    }
}