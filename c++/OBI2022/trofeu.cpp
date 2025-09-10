#include <iostream>
#include <vector>
#include <functional>

using namespace std;

int main() {
  std::vector<int> pontuacao = {0, 0, 0, 0, 0};
  int placas = 0, trofeus = 0;

  for (int i = 0; i <= 4; i++)
  {
    cin >> pontuacao[i];
  }

  sort(pontuacao.begin(), pontuacao.end(), greater<int>());

  for (int ponto : pontuacao)
  {
    if (ponto != pontuacao[0]) {
      break;
    }
    trofeus++;
  }

  if (pontuacao[0] != pontuacao[1]) {   
    for (int ponto : pontuacao)
    {
      if (ponto == pontuacao[trofeus]) {
        placas++;
      }
    }
  }

  cout << trofeus << " " << placas << endl;

  return 0;
}
