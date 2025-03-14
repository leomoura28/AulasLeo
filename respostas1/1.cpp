#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main() {
    //Apenas usei a propriedade de que o maior dos números deve ser maior ou igual a todos os outros.
    int a,b,c;
    cin >> a >> b >> c;
    if(a >= b && a >= c){
        cout << "primeiro " << a << endl;
    } else {
        if(b >= a && b >= c){
            cout << "segundo " << b << endl;
        }  else {
            cout << "terceiro " << c << endl;
        }
    }

    return 0;
}
