#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define INF 2147483647
#define endl '\n'

int main() {
    int n,m;
    cin >> n >> m;
    int v[m + 1];
    int v1[m + 1];
    for(int i = 0;i < m; i++){
        cin>> v[i];
        v1[i] = v[i];
    }
    int countmin = 0;
    int countmax = 0;
    for(int i = 0; i < n; i++){
        int minimo = INF;
        int iminimo = -1;
        int maximo = 0;
        int imaximo = -1;
        for(int j = 0; j < m; j++){
            if(v[j] == 0) continue; 
            if(v[j] > maximo){
                maximo = v[j];
                imaximo = j;
            }
        }
        for(int j = 0; j < m; j++){
            if(v1[j] == 0) continue;
            if(v1[j] < minimo){
                iminimo = j;
                minimo = v1[j];
            } 
        }
        countmin += minimo;
        countmax += maximo;
        v[imaximo]--;
        v1[iminimo]--;
    }
    cout << countmax << " " << countmin << endl;
    return 0;
}
