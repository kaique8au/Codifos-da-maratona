#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
signed main(){ios
    int n,x,ma=0,st=0;
    cin>>n>>x;
    vector<pair<int,int>> vp(n);
    for(auto&[i,j]:vp){
        cin>>i>>j;
        st+=j;
    }
    vector<int> pd(st+1,1e18);
    pd[0]=0;
    for(auto &[i,j]:vp){
        for(int k=st; k>=j; k--){
            pd[k]=min(pd[k],pd[k-j]+i);
        }
    }
    for(int i=0; i<=st; i++)if(pd[i]<=x)ma=i;
    cout<<ma<<'\n';
}