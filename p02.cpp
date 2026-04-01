
#include<iostream>
#include<fstream>
using namespace std;


int main(){
    int n;
    ifstream arq;
    string name;
    cout << "digite o nome do arquivo: ";
    getline (cin,name);
    arq.open(name);
    arq.open("input/"+name);
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