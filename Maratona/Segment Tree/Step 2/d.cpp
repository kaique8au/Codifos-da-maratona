#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,m,a,x,v;
    cin>>n>>m;
    vector<int> ve(n),seg(4*n);
    for(auto & k:ve)cin>>k;
    auto build=[&](this auto && build,int l,int r,int p)->int {
        if(l==r)return seg[p]=ve[r];
        int m=(l+r)>>1;
        return seg[p]=max(build(l,m,p<<1),build(m+1,r,(p<<1)|1));
    };
    auto update=[&](this auto && update,int l,int r,int p,int i,int x)->int {
        if(r<i || l>i)return seg[p];
        if(r==l)return seg[p]=x;
        int m=(l+r)>>1;
        return seg[p]=max(update(l,m,p<<1,i,x),update(m+1,r,(p<<1)|1,i,x));
    };
    auto query=[&](this auto && query,int l,int r,int p,int x,int i)->int {
        if(seg[p]<x)return -1;
        if(l==r)return r;
        int m=(l+r)>>1;
        if(m<i)return query(m+1,r,(p<<1)|1,x,i);
        int t=query(l,m,p<<1,x,i);
        if(t==-1)return query(m+1,r,(p<<1)|1,x,i);
        else return t;
    };
    build(0,n-1,1);
    for(int i=0; i<m; i++){
        cin>>a>>x>>v;
        if(a&1)update(0,n-1,1,x,v);
        else cout<<query(0,n-1,1,x,v)<<"\n";
    }
}