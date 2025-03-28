#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define INF 2147483647
#define endl '\n'
 
int main() {
    int a, b;
    cin >> a >> b;
    int count = 0;
    for(int i = 0; i < 1001; i++){
        for(int j = 0; j < 1001; j++){
            if(i*i + j == a && i + j*j == b) count++; 
        }
    }
    cout << count << endl;
    return 0;
}