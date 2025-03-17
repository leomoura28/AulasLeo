#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Basicamente, para cada letra, eu vejo se ela eh maiuscula, vendo se, na tabela ascii, ela eh maior ou igual ao 
    // caractere 'A', e também mneor ou igual ao caractere 'Z', se não for, vai ser uma minúscula.
    // Daí, sabendo se é maiúscula ou minúscula, eu aplico essa soma que vai transformar entre maiúscula e minúscula,
    //porque as letras minúsculas estão agrupadas, assim como as maiúsculas, então a distância entre 'B' e 'b' eh a 
    // mesma que a distância entre 'G' e 'g'.
    char ae,be;
    cin >> ae >> be;
    if(ae >= 'A' && ae <= 'Z') ae = ae + 'a' - 'A';
    else ae = ae + 'A' - 'a';
    if(be >= 'A' && be <= 'Z') be = be + 'a' - 'A';
    else be = be + 'A' - 'a'; 
    return 0;
}
