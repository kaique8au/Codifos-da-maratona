#include <bits/stdc++.h>
using namespace std;
#define int long long
void save(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n;
    cin>>n;
    vector<string> v(n);
    for(auto &k:v)cin>>k;
    sort(v.begin(),v.end(),[](const string a, const string b){return a+b<b+a;});
    string f;
    for(auto &k:v)f+=k;
    cout<<f<<'\n';
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    save();
}