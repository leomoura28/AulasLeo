#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main() {
    //Aqui eu basicamente uso daquela propriedade de que a divisão sempre arredonda pra baixo em inteiros
    //já que, se o número for divisível, a divisão entre os dois não vai arredondar nada, então ,se eu multiplicar
    //denovo, ele vai preservar o número. Por outro lado, se não for divisível, quando eu multiplicar denovo, vai dar um
    //número menor, exemplo, 15 e 7, 15 dividido por 7 é 2, e 2 vezes 7 é 14.
    int n, m;
    cin >> n >> m;
    if(n/m*m == n) cout << "divisível" << endl;
    else cout << "não divisível" << endl;
    return 0;
}
