#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    long long int soma, number;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> m;
        soma = 0;
        for(int j=0; j<m; j++) {
            cin >> number;
            soma += number;
        }
        if(sqrt(soma) == double(int(sqrt(soma))))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}