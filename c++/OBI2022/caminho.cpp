#include <iostream>
/*
@Authores: Denny Soares
           Igor Guimarães
           Márcio Moda
Data: 10/09/2025

This code is linceded GPL v.3
*/

using namespace std;

int main() {
  int qtd_postes, trechos_escuros = 0;

  cin >> qtd_postes;
  int postes[qtd_postes];

  for (int i = 0; i < qtd_postes; i++) {
    cin >> postes[i];
  }

  for (int j = 0; j < qtd_postes; j++) {
    if (postes[j] != postes[qtd_postes - 1]) {
      if (postes[j] + postes[j + 1] < 1000) {
        trechos_escuros++;
      }
    }

    if (postes[j] == postes[qtd_postes - 1]) {
      if (postes[j] + postes[0] < 1000) {
        trechos_escuros++;
      }
    }
  }

  cout << trechos_escuros << endl;
  
  return 0;
}