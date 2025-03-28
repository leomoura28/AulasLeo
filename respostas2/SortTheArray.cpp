#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define INF 2147483647
#define endl '\n'

int main() {
    int n;
    cin >> n;
    int v[n + 1];
    v[n] = 0;
    int it = 0;
    int count = 0;
    int already = 0;
    int countmax = 0;
    int l = 0, r = 0;
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int it = 0; it < n - 1; it++){
        if(v[it] > v[it + 1]){
            if(already == 1){
                cout << "no" << endl;
                return 0;
            } 
            already = 1;
            l = it;
            for(it; it < n - 1; it++){
                if(v[it] < v[it + 1]){
                    r = it;
                    break;
                }
                if(it == n - 2){
                    r = it + 1;
                    break;
                }
            }  
        }
    }
    if(r < n - 1){
        if(v[l] > v[r + 1]){
            cout << "no" << endl;
            return 0;
        }
    }
    if(l > 0){
        if(v[r] < v[l - 1]){
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    l++;
    r++;
    cout << l << " " << r << endl;
    return 0;
}
