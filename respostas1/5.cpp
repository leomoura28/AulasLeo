#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Aqui, basicamente, eu sempre repito a estrutura de chutar o número do meio entre o menor e o maior
    // e quando ele fala que é maior, eu coloco o meu menor possivel como o que eu chutei mais um, e se falar que for menor 
    // eu coloco o meu maior possivel como o que eu chutei menos um. Com isso eu consigo acertar tudo em log(n), n sendo o número de
    // tentativas que eu posso fazer, nesse caso 40, pois eh de 1 a 40.
    int menor = 1, maior = 40;
    int guess = (menor + maior)/2;
    int tentativas = 0;
    cout << guess << endl;
    tentativas++;
    char c;
    cin >> c;
    if(c == 'c'){
        cout << "Eu fiz " << tentativas  << " tentativas" << endl;
        return 0;
    }
    if(c == 'M'){
        menor = guess + 1;
    } else maior = guess - 1;
    if(maior < menor){
        cout << "Você está mentindo!!!" << endl;
        return 0;
    }
    guess = (menor + maior)/2;
    cout << guess << endl;
    tentativas++;
    cin >> c;
    if(c == 'c'){
        cout << "Eu fiz " << tentativas  << " tentativas" << endl;
        return 0;
    }
    if(c == 'M'){
        menor = guess + 1;
    } else maior = guess - 1;
    if(maior < menor){
        cout << "Você está mentindo!!!" << endl;
        return 0;
    }
    guess = (menor + maior)/2;
    cout << guess << endl;
    tentativas++;
    cin >> c;
    if(c == 'c'){
        cout << "Eu fiz " << tentativas  << " tentativas" << endl;
        return 0;
    }
    if(c == 'M'){
        menor = guess + 1;
    } else maior = guess - 1;
    if(maior < menor){
        cout << "Você está mentindo!!!" << endl;
        return 0;
    }
    guess = (menor + maior)/2;
    cout << guess << endl;
    tentativas++;
    cin >> c;
    if(c == 'c'){
        cout << "Eu fiz " << tentativas  << " tentativas" << endl;
        return 0;
    }
    if(c == 'M'){
        menor = guess + 1;
    } else maior = guess - 1;
    if(maior < menor){
        cout << "Você está mentindo!!!" << endl;
        return 0;
    }
    guess = (menor + maior)/2;
    cout << guess << endl;
    tentativas++;
    cin >> c;
    if(c == 'c'){
        cout << "Eu fiz " << tentativas  << " tentativas" << endl;
        return 0;
    }
    if(c == 'M'){
        menor = guess + 1;
    } else maior = guess - 1;
    if(maior < menor){
        cout << "Você está mentindo!!!" << endl;
        return 0;
    }
    guess = (menor + maior)/2;
    cout << guess << endl;
    tentativas++;
    cin >> c;
    if(c == 'c'){
        cout << "Eu fiz " << tentativas  << " tentativas" << endl;
        return 0;
    }
    if(c == 'M'){
        menor = guess + 1;
    } else maior = guess - 1;
    if(maior < menor){
        cout << "Você está mentindo!!!" << endl;
        return 0;
    }
    guess = (menor + maior)/2;cout << guess << endl;
    tentativas++;
    cin >> c;
    if(c == 'c'){
        cout << "Eu fiz " << tentativas  << " tentativas" << endl;
        return 0;
    }
    if(c == 'M'){
        menor = guess + 1;
    } else maior = guess - 1;
    if(maior < menor){
        cout << "Você está mentindo!!!" << endl;
        return 0;
    }
    guess = (menor + maior)/2;
    cout << guess << endl;
    tentativas++;
    cin >> c;
    if(c == 'c'){
        cout << "Eu fiz " << tentativas  << " tentativas" << endl;
        return 0;
    }
    if(c == 'M'){
        menor = guess + 1;
    } else maior = guess - 1;
    if(maior < menor){
        cout << "Você está mentindo!!!" << endl;
        return 0;
    }
    guess = (menor + maior)/2;
    return 0;
}