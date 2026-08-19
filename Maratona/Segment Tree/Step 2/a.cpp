#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,m,a,b,c;
    cin>>n>>m;
    vector<tuple<int,int,int,int>> seg(4*n); 
    vector<int> ve(n);
    for(auto & k:ve)cin>>k;
    auto build=[&](this auto && build,int l,int r,int p)->tuple<int,int,int,int> {
        if(l==r)return seg[p]={ve[r],ve[r],ve[r],ve[r]};
        int m=(l+r)>>1;
        auto[eea,est,esm,eda]=build(l,m,p<<1);
        auto[dea,dst,dsm,dda]=build(m+1,r,(p<<1)|1);
        return seg[p]={(max({eea,est,est+dea,est+dst})),(est+dst),(max({esm,dsm,est+dea,dst+eda,est+dst,eda+dea})),(max({dda,dst,dst+eda,est+dst}))};
    };
    auto update=[&](this auto && update,int l,int r,int p,int i,int x)->tuple<int,int,int,int> {
        if(r<i || l>i)return seg[p];
        if(r==l)return seg[p]={x,x,x,x};
        int m=(l+r)>>1;
        auto[eea,est,esm,eda]=update(l,m,p<<1,i,x);
        auto[dea,dst,dsm,dda]=update(m+1,r,(p<<1)|1,i,x);
        return seg[p]={(max({eea,est,est+dea,est+dst})),(est+dst),(max({esm,dsm,est+dea,dst+eda,est+dst,eda+dea})),(max({dda,dst,dst+eda,est+dst}))};
    };
    auto[e,st,sm,d]=build(0,n-1,1);
    if(sm<0)cout<<"0\n";
    else cout<<sm<<'\n';
    for(int i=0; i<m; i++){
        cin>>a>>b;
        auto[e,st,sm,d]=update(0,n-1,1,a,b);
        if(sm<0)cout<<"0\n";
        else cout<<sm<<'\n';
    }
}