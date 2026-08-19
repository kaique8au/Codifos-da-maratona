#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);

void save_bb(){ios
    int n, m;
    cin >> n >> m;
    vector<vector<string>> adj(n, vector<string>(m));
    vector<map<string,int>> vmpl(n);
    vector<map<string,int>> vmpc(m);
    vector<int> vl(n);
    vector<int> vc(m);
    map<string,bool> mb;
    map<string,int> mp;
    // Leitura
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> adj[i][j];
        }
        cin >> vl[i];
    }
    for(int j = 0; j < m; j++){
        cin >> vc[j];
    }
    // Construção das equações
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            string x = adj[i][j];
            vmpl[i][x]++;
            vmpc[j][x]++;
            mb[x] = false;
        }
    }
    int resolvidas = 0;
    int total = mb.size();
    while(resolvidas < total){
        // Linhas
        for(int i = 0; i < n; i++){
            int soma = vl[i];
            int c = 0;
            int nn = 0;
            string ss;
            for(auto &[x, y] : vmpl[i]){
                if(mb[x]){
                    soma -= y * mp[x];
                }
                else{
                    c++;
                    nn = y;
                    ss = x;
                }
            }
            if(c == 1){
                mp[ss] =
                    soma / nn;
                mb[ss] = true;
                resolvidas++;
            }
        }
        // Colunas
        for(int j = 0; j < m; j++){
            int soma = vc[j];
            int c = 0;
            int nn = 0;
            string ss;
            for(auto &[x, y] : vmpc[j]){
                if(mb[x]){
                    soma -= y * mp[x];
                }
                else{
                    c++;
                    nn = y;
                    ss = x;
                }
            }
            if(c == 1){
                mp[ss] =
                    soma / nn;
                mb[ss] = true;
                resolvidas++;
            }
        }
    }
    for(auto &[nome, x] : mp){
        cout << nome << ' ' << x << endl;
    }
}
