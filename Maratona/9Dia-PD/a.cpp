#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n; 
    cin>>n;
    vector<int> v(n),pd(n);
    for(auto &k:v)cin>>k;
    pd[1]=abs(v[0]-v[1]);
    for(int i=2; i<n; i++){
        pd[i]=min(abs(v[i]-v[i-1])+pd[i-1],abs(v[i]-v[i-2])+pd[i-2]);
    }
    cout<<pd[n-1]<<'\n';
}