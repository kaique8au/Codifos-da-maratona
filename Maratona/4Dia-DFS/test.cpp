#include <bits/stdc++.h>
using namespace std;
#define int long long

void save(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> sz(n,1);
    vector<int> p(n);
    iota(p.begin(),p.end(),0);
    auto fund=[&](this auto && fund, int a)->int {
        if(p[a]==a) return a;
        return p[a]=fund(p[a]);
    };
    auto uni=[&](int a, int b)->void {
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
    save();
}