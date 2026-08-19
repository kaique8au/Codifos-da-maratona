//descobrir o primeiro e o segundo maior
#include <bits/stdc++.h>
using namespace std;
#define int long long

void save(){
    int n,pm=-1e18,sm;
    cin>>n;
    vector<int> v(n);
    for(auto &k:v){
        cin>>k;
        if(k>pm){
            sm=pm;
            pm=k;
        }else{
            if(k>sm)sm=k;
        }
    }
    for(int i=0; i<n; i++)((v[i]==pm)?(cout<<v[i]-sm<<((i==n-1)?('\n'):(' '))):(cout<<v[i]-pm<<((i==n-1)?('\n'):(' '))));
}

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)save();
}