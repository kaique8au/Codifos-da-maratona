#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
int main(){ios
    int n,k; 
    cin>>n>>k;
    vector<int> v(n+k),pd(n+k);
    for(int i=0; i<n; i++)cin>>v[i];
    pd[0]=0;
    for(int i=1; i<k||i<n; i++)pd[i]=abs(v[0]-v[i]);
    for(int i=k; i<n; i++){
        int me=1000000000;
        for(int j=1; j<=k; j++){
            if((abs(v[i]-v[i-j])+pd[i-j])<me){
                me=abs(v[i]-v[i-j])+pd[i-j];
            }
        }
        pd[i]=me;
    }
    cout<<pd[n-1]<<'\n';
}