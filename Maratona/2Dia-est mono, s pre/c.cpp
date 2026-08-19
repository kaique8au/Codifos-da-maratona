#include <bits/stdc++.h>
using namespace std;
#define int long long
void save(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,q,l,r,k,x;
    cin>>n>>q;
    vector<int> s(n+1,0);
    for(int i=1; i<=n; i++){
        cin>>x;
        s[i]=s[i-1]+x;
    }
    while(q--){
        cin>>l>>r>>k;
        if((s[n]-(s[r]-s[l-1])+((r-l+1)*k))%2)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n;
    cin>>n;
    while(n--)save();
}