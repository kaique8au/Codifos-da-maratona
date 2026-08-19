#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
signed main(){ios
    string a,b,r;
    cin>>a>>b;
    int n=a.size(),m=b.size();
    vector<vector<int>> pd(n+1,vector<int>(m+1,0));
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(a[i-1]==b[j-1])pd[i][j]=pd[i-1][j-1]+1;
            else pd[i][j]=max(pd[i-1][j],pd[i][j-1]);
        }
    }
    int i=n,j=m;
    while(i>0 && j>0){
        if(a[i-1]==b[j-1]){
            r+=a[i-1];
            i--;j--;
        }else{
            if(pd[i-1][j]>=pd[i][j-1])i--;
            else j--;
        }
    }
    reverse(r.begin(),r.end());
    cout<<r<<'\n';
}