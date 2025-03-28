#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define INF 2147483647
#define endl '\n'
int main() {
    string a, b;
    cin >> a >> b;
    if(a.size() != b.size()){
        cout << "NO" << endl;
        return 0;
    }
    vector<int> diff;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) diff.push_back(i);
        cout << a[i] << " " << b[i] << " " << diff.size() << endl;
    }
    if(diff.size() == 2){
        cout << "YES" << endl;
    } else cout << "NO" << endl;
    return 0;
}
