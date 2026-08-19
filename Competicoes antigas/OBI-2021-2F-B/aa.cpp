#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
void save(){ios
    int s,a,b;
    cin>>s>>a>>b;
    vector<int> v;
    for(int i=a; i<=b; i++){
        int sd=0,n=i;
        while(n>0){
            sd+=n%10;
            n/=10;
        }
        if(sd==s)v.push_back(i);
    }
    cout<<v[0]<<endl<<v[v.size()-1]<<endl;
}
signed main(){ios
    save();
}