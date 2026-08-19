//movimentar o vetor
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    string s;
    int n,m,x;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>x;
        v[((i-m<0)?(n+i-m):(i-m))]=x;
    }
    for(int i=0; i<n; i++)cout<<v[i]<<((i==n-1)?('\n'):(' '));
}