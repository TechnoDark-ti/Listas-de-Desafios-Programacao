#include <iostream>
#include <string>
#include <vector>

using namespace std;

void q1(){
    class Voo{
        public:
          string Data;
          string Horario;
          int totalVagas = 99, infoVoo;
          bool vagas[99];

          string getData() {
              return Data;
          }
          void setData(string data) {
              data = Data;
          }
          string getHorario() {
              return Horario;
          }
          void setHorario(string horario) {
              horario = Horario;
          }

          int verificaLivre() {
              int cadeira = 0, i;

              for(i = 0; i < totalVagas; i++) {
                  if(!vagas[i]){
                    cadeira++;
                  }
              }
              return cadeira;
          }

          bool isOcupado(int novaVaga) {
              if (vagas[novaVaga]) {
                  return true;
              } else {
                  return false;
              }
          }

          int ocupaVaga(int novaVaga) {
              // condicional pra checar se o novaVaga tá entre 0 e 99
              if (vagas[novaVaga]) {
                  return 0;
              } else {
                  vagas[novaVaga] = true;
                  return 1;
              }
          }
        int proximoLivre(){
            int cadeira = 0, i;

              for(i = 0; i < totalVagas; i++) {
                  if(vagas[i]){
                    cadeira++;
                    cout << "Assento Livre: " << cadeira << endl;
                  }
              }
              return cadeira;
        }

        Voo(string Data, string Horario, int infoVoo, bool vagas, int totalVagas){
            Data = "00/00/00";
            Horario = "00:00:00";
            infoVoo = 0;
            totalVagas = 99;

            int i;
            for(i = 0; i < 99; i++){
                vagas[&i] = false;
            }
        }
    };

}


int main(){
  q1();

  return 0;

}