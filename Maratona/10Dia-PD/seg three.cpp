#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,m,a,b,c;
    cin>>n>>m;
    vector<int> ve(n),seg(4*n);
    for(auto & k:ve)cin>>k;
    auto build=[&](this auto && build,int l,int r,int p)->int {
        if(l==r)return seg[p]=ve[r];
        int m=(l+r)>>1;
        return seg[p]=build(l,m,p<<1)+build(m+1,r,(p<<1)|1);
    };
    //l, r, ql, qr
    auto query=[&](this auto && query,int l,int r,int p,int ql,int qr)->int {
        if(r<ql || l>qr)return 0;
        if(l>=ql && r<=qr)return seg[p];
        int m=(l+r)>>1;
        return query(l,m,p<<1,ql,qr)+query(m+1,r,(p<<1)|1,ql,qr);
    };
    auto update=[&](this auto && update,int l,int r,int p,int i,int x)->int {
        if(r<i || l>i)return seg[p];
        if(r==l)return seg[p]=x;
        int m=(l+r)>>1;
        return seg[p]=update(l,m,p<<1,i,x)+update(m+1,r,(p<<1)|1,i,x);
    };
    build(0,n-1,1);
    for(int i=0; i<m; i++){
        cin>>a>>b>>c;
        if(a&1)update(0,n-1,1,b,c);
        else cout<<query(0,n-1,1,b,c-1)<<'\n';
    }
}