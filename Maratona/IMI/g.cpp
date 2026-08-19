#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,n,k,ini,fim,m;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int s=0;
        vector<int> v(n);
        for(int &i : v){
            cin>>i;
            s+=i;
        }
        if(s<k*k){
            cout<<"-1\n";
            continue;
        }
        auto f=[&](int x)->int{
            int s=0;
            for(int &i : v)s+=(i/x);
            return s;
        };
        for(ini=1,fim=1e9 + 1;ini!=fim;){
            m=(ini+fim)/2;
            (f(m)>=k*k)?ini=m+1:fim=m;
        }
        cout<<(ini-1)<<'\n';
    }
}