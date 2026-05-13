#include <iostream>
#include <fstream>
#include <algorithm>
#include <unordered_map>
#include <iomanip>

using namespace std;

int main() {
    ifstream arqCatalogo("livros.txt");
    ifstream arqDevolucoes("devolucoes.txt");
    unordered_map<string, int> catalogo;
    ofstream relatorio("relatorio.csv");

    if(!arqCatalogo.is_open() || !arqDevolucoes.is_open()) {
        cerr << "Erro ao abrir os arquivos!" << endl;
        return 1;
    }

    string nome;
    double preco;

    while(arqCatalogo >> nome >> preco){
        catalogo[nome] = preco;
    }

    string codigodevolucao;
    int diasatraso;

    while(arqDevolucoes >> codigodevolucao >> diasatraso){
        double valorMulta = catalogo[codigodevolucao] * diasatraso;
        if(valorMulta > 0) {
            relatorio << codigodevolucao << ";" << fixed << setprecision(2) << valorMulta << ";" << "OK" << endl;
        }
        else {
            relatorio << codigodevolucao << ";" << fixed << setprecision(2) << 0.00 << ";" << "CODIGO NAO ENCONTRADO" << endl;
        }
    }

    arqCatalogo.close();
    arqDevolucoes.close();
    relatorio.close();



    return 0;
}