#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define INF 2147483647
#define endl '\n'
int main() {
    string s;
    cin >> s;
    int countup = 0, countdown = 0;
    for(int i = 0; i < int(s.size()); i++){
        if(s[i] >= 'a' && s[i] <= 'z') countdown++;
        else countup++;
    }
    int diff;
    if(countup > countdown){
        for(int i = 0; i < int(s.size()); i++){
            if(s[i] >= 'a' && s[i] <= 'z') s[i] += 'A' - 'a';
        }
    } else {
        for(int i = 0; i < int(s.size()); i++){
            if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 'a' - 'A';
        }
    }
    cout << s << endl;
    return 0;
}
