#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x,a,i;
    cin>>n>>x;
    map<int,int> m;
    for(i=1;i<=n;i++){
        cin>>a;
        if(m[a]){
            cout<<m[a]<<' '<<i<<'\n';
            break;
        }else{
            m[x-a]=i;
        }
    }
    if(i>n){
        cout<<"IMPOSSIBLE\n";
    }
}