#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define INF 2147483647
#define endl '\n'
int main() {
    int a, b, n;
    cin >> a >> b >> n;
    for(int i = 0; i < 10; i++){
        if((10*a + i) % b == 0){
            cout << (10*a + i);
            for(int j = 0; j < n - 1; j++){
                cout << 0;
            }
            cout << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
