#include <bits/stdc++.h>
using namespace std;
int main() {
    bool vdd = false;
    int diff=0;
    char c1, c2;
    string primeiro, segundo;
    cin >> primeiro >> segundo;
    if(primeiro.size() == segundo.size()) {
        for(int i=0; i<primeiro.size(); i++) {
            if(primeiro[i] != segundo[i]) {
                if(diff == 0) {
                    c1 = primeiro[i];
                    c2 = segundo[i];
                }
                else if(diff == 1) {
                    if(primeiro[i] == c2 && segundo[i] == c1)
                        vdd = true;
                }
                diff++;
            }
        }
    }
    if(vdd && diff == 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}