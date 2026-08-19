#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,a=0,b=0;
    cin>>n;
    vector<int> v(n);
    for(auto &k:v)cin>>k;
    int i=0,j=n-1,ta=0,tb=0;
    while(i<=j){
        if(ta<tb){
            a++;
            ta+=v[i];
            i++;
        }else{
            if(ta>tb){
                b++;
                tb+=v[j];
                j--;
            }else{
                if(i==j){
                    a++;
                    ta+=v[i];
                    i++;

                }else{
                    a++;
                    ta+=v[i];
                    i++;
                    b++;
                    tb+=v[j];
                    j--;
                }
            }
        }
    }
    cout<<a<<' '<<b<<'\n';
}