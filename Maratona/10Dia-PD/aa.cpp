#include <bits/stdc++.h>
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define int long long
#define endl '\n'
using namespace std;
void save(){ios
    int n,ma=0;
    cin>>n;
    vector<int> v(n);
    for(auto &k:v){
        cin>>k;
        ma=max(ma,k);
    }
    vector<int> seg(4*(ma+1),0);
    auto query=[&](auto && query,int l,int r,int p,int qr)->int {
        if(l>qr)return 0;
        if(r<=qr)return seg[p];
        int m=(l+r)>>1;
        return max(query(query,l,m,p<<1,qr),query(query,m+1,r,(p<<1)|1,qr));
    };
    auto update=[&](auto && update,int l,int r,int p,int k,int x)->int {
        if(k<l || k>r)return seg[p];
        if(l==r)return seg[p]=x;
        int m=(l+r)>>1;
        return seg[p]=max(update(update,l,m,p<<1,k,x),update(update,m+1,r,(p<<1)|1,k,x));
    };
    for(int i=0; i<n; i++){
        int p=query(query,0,ma,1,v[i]-1);
        update(update,0,ma,1,v[i],p+1);
    }
    cout<<seg[1]<<endl;
}
signed main(){ios
    save();
}