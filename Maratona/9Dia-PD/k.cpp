#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
int main(){ios
    int n;
    cin>>n;
    vector<int> pd(n+1,1e9);
    queue<pair<int,int>> q;
    q.emplace(n,0);
    while(!q.empty()){
        auto[at,qua]=q.front();
        q.pop();
        if(pd[at]<=qua)continue;
        pd[at]=qua;
        int y=at;
        while(y>0){
            int aux=y%10;
            y/=10;
            q.emplace(at-aux,qua+1);
        }
    }
    cout<<pd[0]<<'\n';
}