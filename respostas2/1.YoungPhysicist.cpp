#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define INF 2147483647
#define endl '\n'

int main() {
    int n;
    cin >> n;
    int v[n][3];
    int valid = 1;
    for(int i = 0; i < n; i++){
        cin >> v[i][0] >> v[i][1] >> v[i][2];
    }
    for(int i = 0; i < 3; i++){
        int soma = 0;
        for(int j = 0; j < n; j++){
            soma += v[j][i];
        }
        if(soma != 0) valid = 0;
    }
    if(valid) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
