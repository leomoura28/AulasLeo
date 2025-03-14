#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main() {
    //Aqui basicamente trabalhei com as imposições do problema, e somente fiz condicões
    int a1,a2,a3,a4,a5;
    int m;
    cin >> a1 >> a2 >> a3 >> a4 >> a5;
    int certo = 1;
    if(a2 < a1) m = 1;
    else m = 0;
    if(a3 >= a2 && m == 0 || a3 <= a2 && m == 1) certo = 0;
    else {
        if(m == 0){
            m = 1;
        } else {
            m = 0;
        }
    }
    if(a4 >= a3 && m == 0 || a4 <= a3 && m == 1) certo = 0;
    else {
        if(m == 0){
            m = 1;
        } else {
            m = 0;
        }
    }
    if(a5 >= a4 && m == 0 || a5 <= a4 && m == 1) certo = 0;
    else {
        if(m == 0){
            m = 1;
        } else {
            m = 0;
        }
    }
    if(certo == 1) cout << "certo" << endl;
    else cout << "errado" << endl;
    return 0;
}
