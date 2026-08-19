#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
signed main(){ios
    vector<bool> vis(1000001,true);
    vector<int> p;
    vis[0]=vis[1]=false;
    for(int i=2; i*i<=1000000; i++){
        if(vis[i]){
            p.push_back(i);
            for(int j=i+i; j*j<=1000000; j+=i)vis[j]=false;
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> mp;
        auto fatora=[&](int x)->void {
            for(int i=0; i<p.size() && p[i]*p[i]<=x; i++){
                while(x%p[i]==0){
                    x/=p[i];
                    mp[p[i]]++;
                }
            }
            if(x>1)mp[x]++;
        };
        for(int i=0,x; i<n; i++){
            cin>>x;
            fatora(x);
        }
        bool ver=true;
        for(auto &[i,j]:mp){
            if(j%n!=0){
                ver=false;
                break;
            }
        }
        ((ver)?(cout<<"YES\n"):(cout<<"NO\n"));
    }
}