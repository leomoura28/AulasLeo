#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define INF 2147483647
#define endl '\n'
int main() {
    int n;
    cin >> n;
    vector<vector<int>> v (100001);
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v[a].push_back(i);
    }
    vector<int> razoes;
    vector<int> is;
    for(int i = 0; i < 100001; i++){
        if(v[i].size() == 1){
            is.push_back(i);
            razoes.push_back(0);
            continue;
        }
        if(int(v[i].size()) > 0){
            int valid = 1;
            int razao = v[i][1] - v[i][0];
            for(int j = 1; j < int(v[i].size()); j++){
                if(v[i][j] - v[i][j - 1] != razao) valid = 0;
            }
            if(valid == 1){
                is.push_back(i);
                razoes.push_back(razao);
            }
        }
    }
    cout << int(is.size()) << endl;
    for(int i = 0; i < int(is.size()); i++){
        cout << is[i] << " " << razoes[i] << endl;
    }
    return 0;
}
