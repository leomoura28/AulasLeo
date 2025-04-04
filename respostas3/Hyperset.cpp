#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    char v[n][k];
    map<string, int> m;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        m[v[i]]++;
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            string c;
            for(int a = 0; a < k; a++){
                int total = 'S' + 'E' + 'T';
                if(v[i][a] == v[j][a]){
                    c += v[j][a];
                } else {
                    total -= v[j][a];
                    total -= v[i][a];
                    c += total;
                }
            }
            if(m[c] != 0){
                count++;
            }
        }
    }
    cout << count / 3 << endl;
    return 0;
}
