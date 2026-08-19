#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
signed main(){ios
    int t;
    cin>>t;
    vector<int> p(1000001);
    for(int i=2; i<=1000000; i++){
        if(!p[i]){
            for(int j=i; j<=1000000; j+=i)if(!p[j])p[j]=i;
        }
    }
    while(t--){
        int n,res=1;
        cin>>n;
        map<int,int> mp;
        while(n>1){
            mp[p[n]]++;
            n/=p[n];
        }
        for(auto &[i,j]:mp)res*=(j+1);
        cout<<res<<'\n';
    }
}