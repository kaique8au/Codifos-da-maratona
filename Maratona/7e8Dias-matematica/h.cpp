#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
void save(){ios
    int n;
    cin>>n;
    int raiz=sqrt(n);
	vector<bool> vis(1000001,true);
    vector<int> p;
    vis[0]=vis[1]=false;
	for(int i=2; i*i<=1000000000000; i++){
        if(vis[i]){
            p.push_back(i);
            for(int j=i+i; j*j<=1000000000000; j+=i)vis[j]=false;
        }
    }
    auto fatora=[&](int x)->vector<int> {
        vector<int> res;
        for(int i=0; i<p.size() && p[i]*p[i]<=x; i++){
            while(x%p[i]==0){
                x/=p[i];
                res.push_back(p[i]);
            }
        }
        if(x>1)res.push_back(x);
        return res;
    };
    int c=0;
    vector<int> res=fatora(n);
    map<int,int> mp;
    for(auto &i:res)mp[i]++;
    for(auto &[i,j]:mp){
        for(int k=1; k<=j ; k++){
            j-=k;
            c++;
        }
    }
    cout<<c<<'\n';
}
signed main(){ios
    save();
}