#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define INF 2147483647
#define endl '\n'

int main() {
    int n;
    cin >> n;
    vector<int> x (n);
    for(int i = 0; i < n; i++) cin >> x[i];
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int parameter;
        cin >> parameter;
        int count = 0;
        for(int i = 0;i < n; i++){
            if(x[i] <= parameter) count++;
        }
        cout << count << endl;
    }
    return 0;
}
