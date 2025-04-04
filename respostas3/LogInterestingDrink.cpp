#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define INF 2147483647
#define endl '\n'

int main() {
 
   int n;
   cin >> n;
 
   vector<int> v (n);
   for(int i=0;i<n;i++) cin >> v[i];
 
   sort(v.begin(),v.end());
 
    int q, x;
    cin >> q;
 
    while(q--){
        // soh vou mudar o ans quando eu souber que meu meio ta atrás de ou no x, pq ai eu sei que estou no caminho certo;
        // nao quero ambiguidade de poder escolher o imediatamente maior ou menor, so quero realmente o imediatamente menor ou igual
        cin >> x;
        int low = 0,high = n-1;
        int ans = -1;
        while(low <= high){
            int mid = (low + high)/2;
            if(v[mid] <= x){
                low = mid + 1;
                ans = low; //faco depois de somar 1 pq o vetor vai de zero a n - 1;
            } else high = mid - 1;
        }
        if(ans == -1) cout << "0\n";
        else cout << ans <<"\n";
  }
}