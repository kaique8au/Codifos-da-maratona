#include <bits/stdc++.h>
using namespace std;
#define int long long
void save(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    auto dfs=[&](this auto && dfs, int at)->bool {
        if(at==m)return true;
        if(at%3==0){
            if(at/3>=m){
                return (dfs(at/3)||dfs(at*2/3));
            }else{
                if(at*2/3>=m){
                    return dfs(at*2/3);
                }
            }
        }
        return false;
    };
    if(dfs(n))cout<<"YES\n";
    else cout<<"NO\n";
    vector<int> sz(n,1);
    vector<int> p(n);
    iota(p.begin(),p.end(),0);
    auto fund=[&](this auto && fund, int a)->int {
        if(p[a]==a) return a;
        return p[a]=fund(p[a]);
    };
    auto uni=[&](this auto && uni, int a, int b)->void {
        a=fund(a);
        b=fund(b);
        if(a==b)return;
        if(sz[a]<sz[b])swap(a,b);
        p[b]=a;
        sz[a]+=sz[b];
    };
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n;
    cin>>n;
    while(n--)save();
}