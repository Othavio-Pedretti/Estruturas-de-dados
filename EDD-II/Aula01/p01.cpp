// primeiro exemplo de entrada de dados utilizando um arquivo externo
#include<iostream>
#include<fstream>   // lib para manipular
using namespace std;


int main(){
    int n;
    ifstream arq;
    arq.open("numeros.txt"); // tentativa de abrir o arquivo
    if(!arq){ // se não abrir o arquivo
        cout << "não foi possivel abrir o arquivo!" << endl;
        exit(1);
    }
    while (arq >> n) { // enquanto tiver conteudo no arquivo ele continuara rodando.

        cout << n << endl;
    };
    arq.close();

    return 0;

}
