#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define INF 2147483647
#define endl '\n'

int main() {
    int n;
    cin >> n;
    map<int,int> m;
    for(int i = 0; i < n;i++){
        int a;
        cin >> a;
        m[a]++;
    }
    cout << m.size() << endl;
    return 0;
}
