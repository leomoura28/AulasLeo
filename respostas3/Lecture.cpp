#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin >> n >> k;
    map<string,string> m;
    for(int i = 0; i < k; i++){
        string a,b;
        cin >> a >> b;
        m[a] = b;
    }
    for(int i = 0; i < n; i++){
        string c;
        cin >> c;
        if(c.size() > m[c].size()) cout << m[c] << " ";
        else cout << c << " ";
    }
    cout << endl;
    return 0;
}
