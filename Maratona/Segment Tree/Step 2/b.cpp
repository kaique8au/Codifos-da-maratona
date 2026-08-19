#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,m,a,q;
    cin>>n>>m;
    vector<int> ve(n),seg(4*n);
    for(auto & k:ve)cin>>k;
    auto build=[&](this auto && build,int l,int r,int p)->int {
        if(l==r)return seg[p]=ve[r];
        int m=(l+r)>>1;
        return seg[p]=build(l,m,p<<1)+build(m+1,r,(p<<1)|1);
    };
    auto update=[&](this auto && update,int l,int r,int p,int i)->int {
        if(r<i || l>i)return seg[p];
        if(r==l)return seg[p]^=1;
        int m=(l+r)>>1;
        return seg[p]=update(l,m,p<<1,i)+update(m+1,r,(p<<1)|1,i);
    };
    auto query=[&](this auto && query,int l,int r,int p)->int {
        if(l==r && seg[p]==q)return r;
        if(seg[p]<q){
            q-=seg[p];
            return -1;
        }
        int m=(l+r)>>1;
        int t=query(l,m,p<<1);
        if(t==-1)return query(m+1,r,(p<<1)|1);
        else return t;
    };
    build(0,n-1,1);
    for(int i=0; i<m; i++){
        cin>>a>>q;
        if(a&1)update(0,n-1,1,q);
        else{
            q++;
            cout<<query(0,n-1,1)<<"\n";
        } 
    }
}