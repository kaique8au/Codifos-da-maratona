#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
signed main(){ios
    int n,x;
    cin>>n>>x;
    vector<int> p(n),v(n);
    vector<vector<int>> pd(n+1,vector<int>(x+1,0));
    for(int i=0; i<n; i++)cin>>p[i]>>v[i];
    for(int i=1; i<=n; i++){
        pd[i][0]=0;
        for(int j=1; j<=x; j++){
            if(j-p[i-1]<0)pd[i][j]=pd[i-1][j];
            else pd[i][j]=max(pd[i-1][j],pd[i-1][j-p[i-1]]+v[i-1]);
        }
    }
    int ma=0;
    for(auto &k:pd[n])ma=max(k,ma);
    cout<<ma<<'\n';
}