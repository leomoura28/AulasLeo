#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define INF 2147483647
#define endl '\n'
int main() {
    long long int n, m;
    cin >> n;
    long long int c1 = 0, c2 = 0;
    long long int a[n + 1];
    long long int first[n + 1];
    long long int last[n + 1];
    for(long long int i = 0; i < n; i++){
        cin >> a[i];
        first[i] = -1;
        last[i] = -1;
    }
    first[n] = -1;
    last[n] = -1;
    for(long long int i = 0; i < n; i++){
        if(first[a[i]] == -1) first[a[i]] = i + 1;
    }
    for(long long int i = n - 1; i >= 0; i--){
        if(last[a[i]] == -1) last[a[i]] = n - i;
    }
    cin >> m;
    long long int b;
    for(long long int i = 0; i < m; i++){
        cin >> b;
        if(first[b] != -1 && last[b] != -1){
            c1 += first[b];
            c2 += last[b];
        } else {
            c1 += n;
            c2 += n;
        }
    }
    cout << c1 << " " << c2 << endl;
    return 0;
}
