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
    auto find=[&](this auto && find, int a)->int {
        if(p[a]==a) return a;
        return p[a]=find(p[a]);
    };
    auto uni=[&](int a, int b)->void {
        a=find(a);
        b=find(b);
        if(a==b)return;
        if(sz[a]<sz[b])swap(a,b);
        sz[a]+=sz[b];
        p[b]=a;
    };
    int tot=0;
    priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>, greater<>>> qt;
    while(!qt.empty()){
        auto[c,a,b]=qt.top();
        qt.pop();
        if(find(a)==find(b))continue;
        tot+=c;
        uni(a,b);
    }
}

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    save();
}