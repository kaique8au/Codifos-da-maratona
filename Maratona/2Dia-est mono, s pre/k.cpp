#include <bits/stdc++.h>
using namespace std;
#define int long long
void save(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,m,t,l,r;
    cin>>n;
    vector<int> v(n),sd(n+1,0),so(n+1,0);
    for(int i=0; i<n; i++){
        cin>>v[i];
        sd[i+1]=sd[i]+v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++){
        so[i+1]=so[i]+v[i];
    }
    cin>>m;
    while(m--){
        cin>>t>>l>>r;
        if(t==1)cout<<sd[r]-sd[l-1]<<'\n';
        else cout<<so[r]-so[l-1]<<'\n';
    }
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    save();
}