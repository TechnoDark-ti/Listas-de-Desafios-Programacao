#include <iostream>
#include <string>
#include <ctime> //solucao interna

using namespace std;

int main(){
    class Jogador{
        public:
        string dataNascimento, nome, nacionalidade, posicao;
        float peso, altura;

        void setNome(string novoNome){
            novoNome = nome;
        }
        string getNome(){
            return nome;
        }
        void setdataNascimento(string novoDataNascimento){
            novoDataNascimento = dataNascimento;
        }
        string getdadNasciment(){
            return dataNascimento;
        }
        void setNacionalidade(string novaNacionalidade){
            novaNacionalidade = nacionalidade;
        }
        string getNacionalidade(){
            return nacionalidade;
        }
        void setPosicao(string novaPosicao){
            novaPosicao = posicao;
        }
        string getPosicao(){
            return posicao;
        }
        void setPeso(float novoPeso){
            novoPeso = peso;
        }
        float getPeso(){
            return peso;
        }
        void setAtulrau(float novaAltura){
            novaAltura = altura;
        }
        float getAltura(){
            return altura;
        }
        Jogador(string dataNascimento, string nome, string posicao, float peso, float altura){
            dataNascimento = "";
            nome = "";
            posicao = "",
            peso = 0.0f;
            altura = 0.0f;
        }
        int calcularIdade(const string& dataNascimento){
            int dia = stoi(dataNascimento.substr(0,2));
            int mes = stoi(dataNascimento.substr(3,2));
            int ano = stoi(dataNascimento.substr(6,4));

            time_t t = time(0);

            tm* agora = localtime(&t);

            int anoAtual = agora->tm_year + 1900;
            int mesAtual = agora->tm_mon + 1;
            int diaAtual = agora->tm_mday;


            int idade = anoAtual - ano;

            if(mesAtual < mes || (mesAtual == mes && diaAtual < dia)){
                idade--;
            }

            return idade;

        }
        

    }


    return 0;
}

/*1. Crie uma classe para representar um jogador de futebol, com os
atributos nome, posição, data de nascimento, nacionalidade, altura e peso.
Crie os métodos públicos necessários para sets e gets e também um método
para imprimir todos os dados do jogador. Crie um método para calcular a
idade do jogador e outro método para mostrar quanto tempo falta para o
jogador se aposentar. Para isso, considere que os jogadores da posição de
defesa se aposentam em média aos 40 anos, os jogadores de meio-campo
aos 38 e os atacantes aos 35.
*/