#include <bits/stdc++.h>
using namespace std;
#define int long long
void save(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &k:v)cin>>k;
    int ma=1e18,c=0;
    for(int i=n-1; i>=0; i--){
        if(v[i]<=ma){
            ma=v[i];
        }else{
            c++;
        }
    }
    cout<<c<<'\n';
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n;
    cin>>n;
    while(n--)save();
}