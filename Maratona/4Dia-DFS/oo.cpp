#include <bits/stdc++.h>
using namespace std;
#define int long long
void save(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> v(n+1);
    int m=gcd(x,y);
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }
    int i;
    for(i=1; i<=n && abs(i-v[i])%m==0; i++);
    if(i==n+1)cout<<"YES\n";
    else cout<<"NO\n";
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n;
    cin>>n;
    while(n--)save();
}